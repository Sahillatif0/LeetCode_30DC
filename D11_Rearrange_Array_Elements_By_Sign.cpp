#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i] >= 0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        for(int i=0, j=0;j<pos.size();i+=2,j++){
            nums[i] = pos[j];
            nums[i+1] = neg[j];
        }
        return nums;
    }
};
int main() {
    Solution s;
    vector <int> v = {-1,1};
    s.rearrangeArray(v);
    for(auto i:v)
        cout<<i<<" ";
}