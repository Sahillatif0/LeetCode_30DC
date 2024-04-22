#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, minimum = prices[0];
        for(int i=1;i<prices.size();i++){
            profit = max(profit, prices[i]-minimum);
            minimum = min(prices[i], minimum);
        }
        return profit;
    }
};
int main() {
    Solution s;
    vector<int> v{7,1,5,3,6,4};
    cout<<s.maxProfit(v);
}