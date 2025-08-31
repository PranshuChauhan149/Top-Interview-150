#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dp;
    int d = 1000000000;
    int f(vector<int>& nums, int i) {
        int n = nums.size();
        if (i >= n - 1)
            return 0;
        if (nums[i] == 0)
            return d;
        int ans = d;
        if (dp[i] != -1)
            return dp[i];
        int maxJump = nums[i];
        for (int j = 1; j <= maxJump; j++) {
            ans = dp[i] = min(ans, 1 + f(nums, i + j));
        }
        return ans;
    }

    int jump(vector<int>& nums) {
        dp.clear();
        dp.resize(nums.size() + 1, -1);
        return f(nums, 0);
    }
};

int main(){

}