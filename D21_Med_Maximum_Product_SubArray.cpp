#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int max = nums[0];
        for(int i=0;i<nums.size();i++){
            int prod = nums[i];
            if(prod>max)
                max = prod;
            for(int j=i+1;j<nums.size();j++){
                prod *= nums[j];
                if(prod>max)
                    max = prod;
            }
        }
        return max;
    }
};
int main() {
    Solution s;
    vector<int> v {2,3,-2,4};
    cout<<s.maxProduct(v);
}