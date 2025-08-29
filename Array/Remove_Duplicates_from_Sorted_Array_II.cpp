#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int n = nums.size();
    int idx = 2;
    if (n <= 2)
      return n;
    for (int i = 2; i < n; i++)
    {
      if (nums[i] != nums[idx - 2])
      {
        nums[idx] = nums[i];
        idx++;
      }
    }
    return idx;
  }
};
int main(){
  
}