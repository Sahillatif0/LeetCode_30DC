#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            if(nums[i]==nums[i+1]) 
                return true;
        return false;
    }
};
int main() {
    vector<int> v = {9,2,4,5,6,7,8,9};
    Solution s;
    cout<<s.containsDuplicate(v);
}