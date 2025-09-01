#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
  {
    int n = gas.size();
    int g = 0;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
      g += gas[i];
      d += cost[i];
    }

    if (g < d)
      return -1;
    int tank = 0;
    int start = 0;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
      total += gas[i] - cost[i];
      tank += gas[i] - cost[i];
      if (tank < 0)
      {
        start = i + 1;
        tank = 0;
      }
    }
    return start;
  }
};
int main()
{
}