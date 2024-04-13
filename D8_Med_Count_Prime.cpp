#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<int> p(n,1); 
        for(int i=2;i<sqrt(n);i++)
            if(p[i])
                for(int j=i*i;j<n;j+=i)
                    p[j] = 0;
        for(int i=2;i<n;i++)
            if(p[i])
                cnt++;
        return cnt;
    }
};
int main() {
    Solution s;
    cout<<s.countPrimes(10);
}
