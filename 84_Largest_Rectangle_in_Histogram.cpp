#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s; 
        int max_area = 0,tp, area_with_top, i = 0; 
        while (i < heights.size()) { 
            if (s.empty() || heights[s.top()] <= heights[i]) 
                s.push(i++);
            else { 
                tp = s.top();
                s.pop();
                area_with_top = heights[tp] * (s.empty() ? i : i - s.top() - 1); 
                if (max_area < area_with_top) 
                    max_area = area_with_top; 
            } 
        } 
        while (s.empty() == false) { 
            tp = s.top(); 
            s.pop(); 
            area_with_top 
                = heights[tp] * (s.empty() ? i : i - s.top() - 1); 
    
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
    
        return max_area;
    }
};
int main() {
 Solution s;
 vector<int> v = {2,1,5,6,2,3};
 cout << s.largestRectangleArea(v);   
}