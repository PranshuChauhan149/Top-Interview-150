#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   
        
   string findCommon(string str1, string str2) {
    if(str1 == str2) return str1;
    
    string result = "";
    int n = min(str1.size(), str2.size());
    
    for(int i = 0; i < n; i++) {
        if(str1[i] == str2[i]) {
            result += str1[i];  
        } else {
            break;
        }
    }
    return result;
}


    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1) return strs[0];
        string s = strs[0];
       
        for(int i=1;i<n;i++){
           
            s = findCommon(s,strs[i]);
            if(s=="") return "";
        }
        return s;
    }
};

int main(){

}