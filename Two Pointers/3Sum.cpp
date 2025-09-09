#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    int n = nums.size();
    if (n < 3)
      return {};
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    int i = 0;
    int j = 1;
    int k = n - 1;
    for (int i = 0; i < n; i++)
    {
      if (i > 0 and nums[i] == nums[i - 1])
        continue;
      int j = i + 1;
      int k = n - 1;
      while (j < k)
      {
        int sum = nums[i] + nums[j] + nums[k];
        if (sum > 0)
          k--;
        else
          (sum < 0) j++;
        else
        {
          ans.push_back({nums[i], nums[j], nums[k]});

          while (j < k and nums[j] == nums[j + 1])
          {
            j++;
          }
          while (j < k and nums[k] == nums[k - 1])
          {
            k--;
          }
          j++;
          k--;
        }
      }
    }
    return ans;
  }
};

int main()
{
}