#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  vector<string> summaryRanges(vector<int> &nums)
  {
    vector<string> ans;
    if (nums.empty())
      return ans;

    int start = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
      // Agar break aa gaya
      if (nums[i] != nums[i - 1] + 1)
      {
        if (start == nums[i - 1])
        {
          ans.push_back(to_string(start));
        }
        else
        {
          ans.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
        }
        start = nums[i]; // naya range start
      }
    }

    // Last range handle karna
    if (start == nums.back())
    {
      ans.push_back(to_string(start));
    }
    else
    {
      ans.push_back(to_string(start) + "->" + to_string(nums.back()));
    }

    return ans;
  }
};

int main()

{
}