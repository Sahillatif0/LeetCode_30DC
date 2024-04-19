#include<iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n<3)
            return n;
        int a=1,b=2,c;
        for(int i=3;i<=n;i++){
            c = a+b;
            a = b;
            b = c;
        }
    return c;      
    }
};
int main() {
    Solution s;
    cout<<s.climbStairs(7);
    return 0;
}