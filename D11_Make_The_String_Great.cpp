#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    string makeGood(string s) {
        int i=0, len=s.size(),cnt=0;
        while(i<s.size() && cnt <= len/2){
            if(s[i] == s[i+1] + 32 || s[i] == s[i+1] - 32)
                s.erase(i,2);
            else
                i++;
            if(s.size()!=0)
                i%=s.size();
            if(i == 0)
                cnt++;
        } 
        return s;
    }
};
int main() {
    Solution s;
    cout<<s.makeGood("a");
}