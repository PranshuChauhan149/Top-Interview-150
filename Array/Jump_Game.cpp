#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> dp;
  bool f(vector<int> &nums, int i)
  {
    if (i >= nums.size() - 1)
      return true;
    if (nums[i] == 0)
      return false;
    if (dp[i] != -1)
      return dp[i];
    int maxjump = nums[i];
    for (int k = 1; k <= maxjump; k++)
    {
      if (f(nums, i + k))
      {
        return dp[i] = true;
      }
    }
    return dp[i] = false;
  }

  bool canJump(vector<int> &nums)
  {
    int n = nums.size();
    dp.clear();
    dp.resize(nums.size() + 1, -1);
    if (n == 1 and nums[0] == 0)
      return true;
    return f(nums, 0);
  }
};

int main()
{
}