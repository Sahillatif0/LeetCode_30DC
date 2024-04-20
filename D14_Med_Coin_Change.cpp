#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0)
            return 0;
        sort(coins.begin(),coins.end());
        int sum = 0, i = coins.size()-1, cnt = 0, checked=0;        
        while(sum!=amount){
            while(sum+coins[i] <= amount){
                cnt++;
                sum+=coins[i];
            }
            if(i==0 && sum!=amount){
                checked++;
                i = coins.size()-checked - 1;
                sum = 0;
                cnt = 0;
                if(checked == coins.size()-1)
                    return -1;
            }
            if(sum==amount)
                return cnt;
            else if(sum<amount){
                cout<<sum<<" "<<amount<<endl;
                cout<<coins[i]<<endl;
                cout<<checked<<" "<<cnt<<endl; 
                i--;
            }
        }
        return cnt;
    }
};
int main() {
    Solution s;
    vector<int> v{186,419,83,408};
    cout<<s.coinChange(v,6249);
}