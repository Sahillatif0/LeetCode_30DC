#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
    int res = 0, n = height.size();  
    for (int i = 1; i < n - 1; i++) { 
        int left = height[i]; 
        for (int j = 0; j < i; j++) 
            left = max(left, height[j]);  
        int right = height[i]; 
        for (int j = i + 1; j < n; j++) 
            right = max(right, height[j]); 
        res = res + (min(left, right) - height[i]); 
    } 
  
    return res; 
    }
};
int main() {
    Solution s;
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<s.trap(height);
}