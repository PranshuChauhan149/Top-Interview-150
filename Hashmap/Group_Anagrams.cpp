#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp1;
        vector<vector<string>> ans;
        for (string str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            mp1[key].push_back(str);
        }
        for (auto& ele : mp1) {
            vector<string> a;
            for (string s : ele.second) {
                a.push_back(s);
            }
            ans.push_back(a);
        }
        return ans;
    }
};
int main()

{
}