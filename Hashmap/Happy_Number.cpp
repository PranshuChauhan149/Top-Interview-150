#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int squareSum(int n)
  {
    int sum = 0;
    while (n != 0)
    {
      int r = n % 10;
      sum += r * r;
      n /= 10;
    }
    return sum;
  }

  bool isHappy(int n)
  {
    if (n == 1)
      return true;
    unordered_set<int> seen;
    while (n != 1 and seen.find(n) == seen.end())
    {
      seen.insert(n);
      if (squareSum(n) == 1)
        return true;
      n = squareSum(n);
    }
    return false;
  }
};
int main()

{
}