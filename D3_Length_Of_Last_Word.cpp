#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0,i = s.length()-1;
        while(i>=0) {
            if(s[i--]!=' ')
                cnt++;
            else if(s[i+1]==' ' && cnt>0)
                return cnt;
        }
        return cnt;
    }
};
int main() {
    Solution s;
    cout<<s.lengthOfLastWord("H");
}