#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int lengthOfLastWord(string s)
  {
    int n = s.size();
    int c = 0;

    for (int i = n - 1; i >= 0; i--)
    {
      if (c > 0 and s[i] == ' ')
        break;
      if (s[i] == ' ')
        continue;
      else
      {
        c++;
      }
    }
    return c;
  }
};

int main()
{
}