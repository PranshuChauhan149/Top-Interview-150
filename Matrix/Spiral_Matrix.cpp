#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> ans;
    int minr = 0;
    int minc = 0;
    int maxr = row - 1;
    int maxc = col - 1;
    int c = 0;
    int val = row * col;
    while (minr <= maxr and minc <= maxc)
    {

      for (int i = minc; i <= maxc; i++)
      {
        c++;
        ans.push_back(matrix[minr][i]);
      }
      if (c == val)
        break;

      minr++;
      for (int i = minr; i <= maxr; i++)
      {
        c++;
        ans.push_back(matrix[i][maxc]);
      }
      if (c == val)
        break;
      maxc--;
      for (int i = maxc; i >= minc; i--)
      {
        c++;
        ans.push_back(matrix[maxr][i]);
      }
      if (c == val)
        break;
      maxr--;
      for (int i = maxr; i >= minr; i--)
      {
        c++;
        ans.push_back(matrix[i][minc]);
      }
      if (c == val)
        break;
      minc++;
    }
    return ans;
  }
};

int main()
{
}