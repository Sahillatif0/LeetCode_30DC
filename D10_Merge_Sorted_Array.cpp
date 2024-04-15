#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++)
            nums1[m+i] = nums2[i];
        sort(nums1.begin(), nums1.end());
    }
};
int main() {
    Solution s;
    vector<int> v1 = {0};
    vector<int> v2 = {1};
    s.merge(v1, 0, v2, 1);
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    return 0;
}