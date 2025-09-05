
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string reverseWords(string s)
  {
    int n = s.size();
    string a = "";
    string ans = "";

    for (int i = n - 1; i >= 0; i--)
    {
      if (a.size() == 0 and s[i] == ' ')
      {
        continue;
      }
      else if (s[i] == ' ' and a.size() != 0)
      {
        reverse(a.begin(), a.end());

        ans += a;

        a = "";
      }
      else
      {
        if (!ans.empty() and a.size() == 0)
        {
          ans += " ";
        }
        a += s[i];
      }
    }
    reverse(a.begin(), a.end());
    ans += a;
    cout << a.size();
    return ans;
  }
};
int main()
{
}