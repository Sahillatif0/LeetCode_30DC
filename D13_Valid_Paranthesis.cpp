#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        // if(s.size()%2)
        //     return false;
        // int len=s.size(),cnt=0;
        // for(int i=0;i<s.size() && cnt <= len/2;){
        //     if((s[i]=='(' && s[i+1]==')') || (s[i]=='[' && s[i+1]==']') || (s[i]=='{' && s[i+1]=='}'))
        //         s.erase(i,2);
        //     else
        //         i++;
        //     if(s.size()!=0)
        //         i%=s.size();
        //     if(i == 0)
        //         cnt++;
        // }
        // if(s.size())
        //     return false;
        // else
        //     return true;
        stack<char> p;
        unordered_map<char, char> m = {{')','('},{']','['},{'}','{'}};
        for(int i=0;i<s.size();i++){
            if(!p.empty() && p.top() == m[s[i]])
                p.pop();
            else
                p.push(s[i]);
        }
        return p.empty();
    }
};
int main() {
    Solution s;
    cout<<s.isValid("[]({})}");
}