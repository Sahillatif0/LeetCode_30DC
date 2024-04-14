#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mSum = nums[0], sum = nums[0];
        for(int i=1;i<nums.size();i++){
            sum = max(nums[i], sum+nums[i]);
            mSum = max(mSum, sum);
        }
        return mSum;
    }
};
int main() {
    Solution s;
    vector<int> v{5,4,-1,7,8};
    cout<<s.maxSubArray(v);

}