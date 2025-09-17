#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k)
  {
    unordered_map<int, int> mp;
    if (nums.size() < 2)
      return false;
    int c = 0;
    if (k > nums.size())
    {
      c++;
    }

    for (int i = 0; i < k and c == 0; i++)
    {
      mp[nums[i]]++;
    }
    for (int i = 0; i < nums.size() and c > 0; i++)
    {
      mp[nums[i]]++;
    }

    for (auto &ele : mp)
    {
      if (ele.second >= 2)
      {
        return true;
      }
    }

    int j = 0;
    for (int i = k; i < nums.size(); i++)
    {
      if (mp.find(nums[i]) != mp.end())
      {
        return true;
      }
      else
      {
        mp[nums[i]]++;
      }
      if (mp[nums[j]] >= 2)
      {
        mp[nums[j]]--;
      }
      else
      {
        mp.erase(nums[j]);
      }
      j++;
    }
    return false;
  }
};

int main()

{
}