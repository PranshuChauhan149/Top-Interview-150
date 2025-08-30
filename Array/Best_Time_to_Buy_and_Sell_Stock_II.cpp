#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = INT_MAX;
        int ans =0;
        for(int i=0;i<prices.size()-1;i++){
            profit = min(profit,prices[i]);
            if(profit<prices[i+1]){
                ans+=prices[i+1]-profit;
                profit = INT_MAX;
            }
        }
        return ans;
    }
};

int main(){

}