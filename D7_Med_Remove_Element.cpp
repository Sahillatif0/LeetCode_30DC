#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        for(int i=0;i<len;){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                nums.push_back(-1);
                len--;
            }
            else
                i++;
        }
        return len;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    cout<<"The length of the array after removing the element is: "<<s.removeElement(nums,5)<<endl;
    for(auto i : nums)
        cout<<i<<" ";
}