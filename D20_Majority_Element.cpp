#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i=0;i<nums.size()/2;i++)
        //     if(nums[i]==nums[i+nums.size()/2])
        //         return nums[i];
        // return nums[nums.size()-1];
        //Other Approach
        // unordered_map<int, int> m;
        // for(int i=0;i<nums.size();i++)
        //     m[nums[i]]++;
        // for(auto i:m)
        //     if(i.second>nums.size()/2)
        //         return i.first;
        // return 0;
        //Boyer-Moore Voting Algorithm
        int count = 0, candidate = 0;
        for(int i=0;i<nums.size();i++){
            if(count==0)
                candidate = nums[i];
            count += (nums[i]==candidate)?1:-1;
            cout<<count<<" "<<candidate<<" "<<nums[i]<<endl;
        }
        return candidate;
    }
};
int main() {
    Solution s;
    vector <int> v {3,2,3,4,4,3};
    cout<<s.majorityElement(v);

}   