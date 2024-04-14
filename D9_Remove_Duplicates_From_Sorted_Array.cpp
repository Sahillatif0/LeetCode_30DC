#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=1;i<nums.size();i++)
            if(nums[i]!=nums[k])
                nums[++k]=nums[i];
        return k+1;
    }
};
int main() {
Solution s;
vector<int> v = {0,0,1,1,2,3,3,3,4,4};
cout<<s.removeDuplicates(v);
for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}