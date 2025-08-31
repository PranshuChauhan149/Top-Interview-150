#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) { return a > b; }
class Solution
{
public:
  int hIndex(vector<int> &citations)
  {
    int n = citations.size();
    sort(citations.begin(), citations.end(), compare);
    int h = 0;
    for (int i = 0; i < n; i++)
    {
      if (citations[i] >= i + 1)
      {
        h++;
      }
      else
        break;
    }
    return h;
  }
};
int main()
{
}