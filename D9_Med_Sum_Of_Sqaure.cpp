#include<iostream>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=2;i*i<=c;i++)
            if(c%i==0){
                int k=0;
                while(c%i==0){
                    c/=i;
                    k++;
                }
                cout<<k%2<<endl;
                if(i%4==3 && k%2)
                    return false;
            }
        return (c%4!=3);
    }
};
int main() {
    Solution s;
    cout<<s.judgeSquareSum(3);
}