#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int romanToInt(string s)
  {
    int s1 = s.size();
    int a = 0;
    int ans = 0;
    for (int i = s1; i >= 0; i--)
    {
      int n = 0;
      char ch = s[i];
      if (ch == 'I')
      {
        n = 1;
      }
      if (ch == 'V')
      {
        n = 5;
      }
      if (ch == 'X')
      {
        n = 10;
      }
      if (ch == 'L')
      {
        n = 50;
      }
      if (ch == 'C')
      {
        n = 100;
      }
      if (ch == 'D')
      {
        n = 500;
      }
      if (ch == 'M')
      {
        n = 1000;
      }
      if (a <= n)
      {
        ans += n;
        a = n;
      }
      else
      {
        ans -= n;
        a = n;
      }
    }
    return ans;
  }
};

int main()
{
}