#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    vector<int> mp(255, -1);
    int i = 0;
    int j = 0;
    int n = s.size();
    if (n == 0 || n == 1)
      return n;
    int ans = 0;
    while (j < n)
    {
      if (mp[s[j]] != -1)
      {
        i = max(i, mp[s[j]] + 1);
      }
      mp[s[j]] = j;
      ans = max(j - i + 1, ans);
      j++;
    }
    return ans;
  }
};
int main()
{
}