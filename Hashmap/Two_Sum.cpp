#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
      int d = target - nums[i];
      if (mp.find(d) != mp.end())
      {
        return {mp[d], i};
      }
      else
      {
        mp[nums[i]] = i;
      }
    }
    return {};
  }
};
int main()

{
}