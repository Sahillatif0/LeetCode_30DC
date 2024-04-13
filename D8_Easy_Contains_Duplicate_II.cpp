#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> e;
        for(int i=0;i<nums.size();i++){
            if(e.count(nums[i]))
                if(i-e[nums[i]]<=k)
                    return true;
            e[nums[i]] = i;
        }
        return false;
    }
    // bool containsNearbyDuplicate(vector<int>& nums, int k) {
    //     for(int i=0;i<nums.size();i++)
    //         for(int j=i+1;(j<=i+k)&&(j<nums.size());j++)
    //             if(nums[i]==nums[j])
    //                 return true;
    //     return false;
    // }
};
int main() {
    Solution s;
    vector<int> v {98,98};
    cout<<s.containsNearbyDuplicate(v,2);
}