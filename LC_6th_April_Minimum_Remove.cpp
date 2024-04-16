//1249. Minimum Remove to Make Valid Parentheses
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string minRemoveToMakeValid(string s) {
     string res;
     bool paranStart = false;
     int paranSCnt = 0, paranCCnt=0,cnt;
     for(int i=0;i<s.length();i++){
        if (s[i] == '(')
            paranSCnt++;
        else if(s[i]==')')
            paranCCnt++;
     }
     for(int i=s.length()-1;i>=0;i--){
        cout<<paranSCnt<<" "<<paranCCnt<<" "<<paranStart<<endl;
        if(s[i]==')'){
            paranStart = true;
            if(paranCCnt>paranSCnt){
                paranCCnt--;
                continue;
            }
        }
        else if(s[i]=='(' && (!paranStart || paranSCnt>paranCCnt)){
            paranSCnt--;
            continue;
        }
        else if(s.at(i)==')' && paranStart){
            paranSCnt--;
            paranCCnt--;
        }
        res.push_back(s.at(i));
     }
     for(int i=0;i<res.length()/2;i++){
        char t = res[i];
        res[i] = res[res.length()-1-i];
        res[res.length()-1] = t;
     }
    //  for(int i=0;i<res.length();i++){
    //     cout<<res[res.length()-1-i];
    //  }
     return res;   
    }
};
int main(){
    Solution s;
    cout<<s.minRemoveToMakeValid("())()(((");
}