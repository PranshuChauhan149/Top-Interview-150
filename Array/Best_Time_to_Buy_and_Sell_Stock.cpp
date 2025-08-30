#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &nums)
  {
    int profit = INT_MAX;
    int ans = 0;
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
      profit = min(profit, nums[i]);
      if (nums[i + 1] > profit)
      {
        ans = max(ans, nums[i + 1] - profit);
      }
    }
    return ans;
  }
};

int main()
{
}