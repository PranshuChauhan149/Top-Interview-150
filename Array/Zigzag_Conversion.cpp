#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string convert(string s, int numRows)
  {
    if (s.size() <= numRows || numRows == 1)
      return s;
    bool isdown = true;
    string str = "";
    int n = s.size();
    vector<vector<char>> ans;
    ans.resize(numRows, vector<char>(n + 1, '0'));
    int j = 0;
    int row = 0;
    int col = 0;
    while (j < s.size())
    {
      ans[row][col] = s[j++];
      if (isdown)
      {
        row++;
        if (row == numRows)
        {
          row -= 2;
          col++;
          isdown = false;
        }
      }
      else
      {
        row--;
        col++;
        if (row < 0)
        {
          row = 1;

          isdown = true;
        }
      }
    }
    string a = "";
    for (int i = 0; i < ans.size(); i++)
    {
      for (int j = 0; j < ans[0].size(); j++)
      {
        if (ans[i][j] != '0')
        {
          a += ans[i][j];
        }
      }
      cout << endl;
    }
    return a;
  }
};

int main()
{
}