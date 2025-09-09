#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int len = n+1;
        int j =0;
        for(int i=0;i<n;i++){
            sum+=nums[i];

            while(sum>=target){
                len = min(i-j+1,len);
                sum-=nums[j];
                j++;
            }
        }
        if(len==n+1) return 0;
        return len;
    }
};
int main(){

}