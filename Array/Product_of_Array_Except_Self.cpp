#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> pre(n, 0);
    vector<int> sef(n, 0);
    pre[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
      pre[i] = pre[i - 1] * nums[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
      nums[i] = nums[i] * nums[i + 1];
    }
    sef[0] = nums[1];
    for (int i = 1; i < n - 1; i++)
    {
      sef[i] = pre[i - 1] * nums[i + 1];
    }

    sef[n - 1] = pre[n - 2];
    return sef;
  }
};

int main()
{
}