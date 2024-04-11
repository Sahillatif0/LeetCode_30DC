#include<iostream>
using namespace std;
class Solution {
public:
    // int addDigits(int num) {
    //     while(num>9){
    //         int sum = 0;
    //             while(num>0){
    //                 sum+=num%10;
    //                 num/=10;
    //             }
    //             num = sum;
    //     }
    //     return num;
    // }
    int addDigits(int num) {
        if(num==0)
            return 0;
        return (num%9==0?9:num%9);
    }
};
int main() {
    Solution s;
    for(int i=0;i<150;i++){
    cout<<s.addDigits(i)<<endl;
    }

}