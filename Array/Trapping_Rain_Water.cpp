#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        int left = 0;
        int right = 0;
        int waterStore = 0;
        while (i < j) {
            if (height[i] < height[j]) {
                if (height[i] >= left) {
                    left = height[i];
                } else {
                    waterStore += left - height[i];
                }
                i++;

            } else {
                if (height[j] >= right) {
                    right = height[j];
                } else {
                    waterStore += right - height[j];
                }
                j--;
            }
        }
        return waterStore;
    }
};

int main(){

}