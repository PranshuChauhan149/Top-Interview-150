#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  bool isPali(string str)
  {
    int i = 0;
    int j = str.size() - 1;
    while (i <= j)
    {
      if (str[i] != str[j])
        return false;
      i++;
      j--;
    }
    return true;
  }

  bool isPalindrome(string s)
  {
    string str = "";
    for (int i = 0; i < s.size(); i++)
    {

      if (s[i] >= 'a' and s[i] <= 'z')
      {
        str += s[i];
      }
      else if (s[i] >= 'A' and s[i] <= 'Z')
      {
        str += s[i] + 32;
      }
      else if (s[i] >= '0' and s[i] <= '9')
      {
        str += s[i];
      }
    }
    cout << "" << '0';
    cout << str;

    return isPali(str);
  }
};

int main()
{
}