#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
    int res = 0, n = height.size();
    vector <int> left(n), right(n);
    left[0] = height[0];
    for(int i=1;i<n;i++)
        left[i]=max(left[i-1],height[i]);
    right[n-1] = height[n-1];
    for(int i=n-2;i>=0;i--)
        right[i]=max(right[i+1],height[i]);
    for (int i = 1; i < n - 1; i++)
        res += (min(left[i], right[i]) - height[i]); 
    return res; 
    }
};
int main() {
    Solution s;
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<s.trap(height);
}