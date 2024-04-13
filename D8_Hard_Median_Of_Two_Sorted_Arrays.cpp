#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(),nums1.end());
        int len = nums1.size();
        double med;
        if(len%2==0)
            med = (nums1[len/2]+nums1[(len/2)-1])/2.0;
        else
            med = (nums1[len/2]);
        return med;
    }
};
int main() {
    Solution s;
    vector<int> v{1,2,3,4,5,6,9}, vv{3,4,6,7,8};
    cout<<s.findMedianSortedArrays(v,vv);
}