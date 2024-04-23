#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = nums.size();
        for(int i=1;i<l-1;i++)
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
                return i;
        if(l>=2)
            if(nums[l-1]>nums[l-2])
                return l-1;
        return 0;
    }
};
int main() {
    Solution s;
    vector<int> v {1,2,3,4,6,5};
    cout<<s.findPeakElement(v);
}