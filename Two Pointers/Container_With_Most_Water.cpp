#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int n = height.size();
    int i = 0;
    int j = n - 1;
    int area = 0;
    while (i < j)
    {
      int l = min(height[i], height[j]);
      int w = j - i;
      int a = l * w;
      area = max(area, a);
      if (height[i] < height[j])
      {
        i++;
      }
      else if (height[i] > height[j])
      {
        j--;
      }
      else
      {
        i++;
        j--;
      }
    }
    return area;
  }
};


int main()
{
}