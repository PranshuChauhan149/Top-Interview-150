#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for (char ch : ransomNote) {
            mp1[ch]++;
        }
        for (char ch : magazine) {
            mp2[ch]++;
        }

        for (int i = 0; i < ransomNote.size(); i++) {
            char ch = ransomNote[i];
            auto ele = mp1[ch];
            if (mp2.find(ch) != mp2.end()) {
                if (mp2[ch] < ele) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
};
int main()
{
}