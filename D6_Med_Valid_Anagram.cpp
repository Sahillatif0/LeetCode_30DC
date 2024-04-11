#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        vector<int> freqS(26,0), freqT(26,0);
        for(int i=0;i<s.size();i++)
            ++freqS[int(s[i])-97];
        for(int i=0;i<t.size();i++)
            ++freqT[int(t[i])-97];
        for(int i=0;i<26;i++)
            if(freqS[i]!=freqT[i])
                return false;
        return true;
    }
};
int main() {
    Solution s;
    s.isAnagram("cat", "cat");

}