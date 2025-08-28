#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();
        if(n==0) return 0;
        if(n==1 and nums[0]==val) return 0; 
        int i =0;
        int j = n-1;
        int c =0;
        while(i<=j){
          
            if(nums[i]!=val){
                i++;
            }
           else if(nums[i]==val and nums[j]!=val){
                swap(nums[i],nums[j]);
                i++;
                j--;
               c++;
            }


           if(nums[j]==val){
                j--;
                c++;
            }

        }
        return n-c;


    }
};



int main(){

}