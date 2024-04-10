#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        for(int i=0;i<n;i++)
            cout<<nums[i]<<" ";
    }

};
int main() {
    vector<int> v{1,2,3,4,5,6,7,8};
    Solution s;
    s.rotate(v, 3);
}