#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());
        vector<int> intNums, num1freq(*max_element(nums1.begin(), nums1.end())+1,0), num2freq(*max_element(nums2.begin(), nums2.end())+1,0);
        for(int i=0;i<nums1.size();i++)
            num1freq[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
            num2freq[nums2[i]]++;
        int size = min(num1freq.size(),num2freq.size());
        for(int i=0;i<size;i++)
            if(num1freq[i]>0 && num2freq[i]>0)
                intNums.push_back(i);
        return intNums;
    }
};
int main() {
    vector<int> v1{1,2,2,1}, v2{2,2}, v3;
    Solution s;
    v3 = s.intersection(v1,v2);
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    
}