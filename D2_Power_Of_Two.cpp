#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        long double num = double(n);
        while(num>1){
            num/=2;
        }
        if(num==1)
            return true;
        return false;
    }
};
int main(){
    Solution s;
    while(1){
        int n;
        cout<<"Enter: ";
        cin>>n;
        cout<<s.isPowerOfTwo(n);
    }
}