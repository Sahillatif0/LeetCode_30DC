#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int trailingZeroes(int n) {
        int cnt = 0;
        for(int i = 5; i <= n; i *= 5) 
            cnt += n/i;
        return cnt;
    }
};
int main() {
    Solution s;
    cout<<s.trailingZeroes(40);
}