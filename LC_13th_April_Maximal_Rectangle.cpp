#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if(n==0)
            return 0;
        int m = matrix[0].size();
        vector<int> height(m,0);
        int mA = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1')
                    height[j]++;
                else
                    height[j]=0;
            }
            mA = max(getMaxArea(height),mA);
        }
        return mA;
    }
    int getMaxArea(vector<int> hist) 
    { 
        stack<int> s; 
    
        int max_area = 0;
        int tp;
        int area_with_top;
        int i = 0; 
        while (i < hist.size()) { 
            if (s.empty() || hist[s.top()] <= hist[i]) 
                s.push(i++);
            else { 
                tp = s.top();
                s.pop();
                area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1); 
                if (max_area < area_with_top) 
                    max_area = area_with_top; 
            } 
        } 
        while (s.empty() == false) { 
            tp = s.top(); 
            s.pop(); 
            area_with_top 
                = hist[tp] * (s.empty() ? i : i - s.top() - 1); 
    
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
    
        return max_area; 
    } 
};

int main() {
    Solution s;
    vector<vector<char>> v{{'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1','1','1','1','1'}, {'1', '0','0','1','0'}};
    cout<<s.maximalRectangle(v);
}