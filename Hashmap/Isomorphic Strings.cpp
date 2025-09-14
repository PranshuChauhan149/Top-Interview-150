#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  bool isIsomorphic(string s, string t)
  {
    if (s.size() != t.size())
      return false;
    unordered_set<int> st;
    vector<pair<int, int>> v(355, {-1, -1});

    for (int i = 0; i < s.size(); i++)
    {
      int val = s[i];
      int val2 = t[i];

      if (v[val].first == -1 and st.find(val2) == st.end())
      {
        v[val].first = val;
        v[val].second = val2;
        st.insert(val2);
      }
      else
      {
        if (v[val].second != val2)
        {
          return false;
        }
      }
    }

    return true;
  }
};

int main()

{
}