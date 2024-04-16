#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l=1,r=nums.size()-1,pair=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++){
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){ 
                l = i+1; r=nums.size()-1;
                while(l<r){
                    if(nums[i]==(-nums[l]-nums[r])){
                        res.push_back({nums[i],nums[l],nums[r]});
                        l++; r--;
                    }
                    else if(nums[i]<(-nums[l]-nums[r]))
                        l++;
                    else
                        r--;
                }
        }
    }
    return res;
    }
};
int main() {
    Solution s;
    vector<int> v = {-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6};
    s.threeSum(v);
}