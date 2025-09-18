#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {
    unordered_set<int> st;
    for (int i = 0; i < nums.size(); i++)
    {
      st.insert(nums[i]);
    }
    int ans = 0;

    for (int ele : st)
    {

      if (st.find(ele - 1) == st.end())
      {
        int curr = ele;
        int c = 1;

        while (st.find(curr + 1) != st.end())
        {
          c++;
          curr++;
        }

        ans = max(ans, c);
      }
    }
    return ans;
  }
};

int main()

{
}