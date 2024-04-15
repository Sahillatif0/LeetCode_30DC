#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int rotatedDigits(int n) {
       int cnt=0;
         for(int i=0;i<=n;i++){
            int num = i, flag=0;
            while(num){
                int d = num%10;
                num/=10;
                if(d==2 || d==5 || d==6 || d==9)
                    flag=1;
                if(d==3 || d==4 || d==7){
                    flag=0;
                    break;
                }
            }
            if(flag)
                cnt++;
         }
         return cnt;
    }
};
int main() {
    Solution s;
    cout<<s.rotatedDigits(1000);
}