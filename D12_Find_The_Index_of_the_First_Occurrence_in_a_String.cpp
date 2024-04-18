#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.length(); i++){
        if(haystack.substr(i,needle.length()) == needle){
            return i;
        }
    }
    return -1;
    }
};
int main() {
    Solution s;
    cout<<s.strStr("hello","ll");
}