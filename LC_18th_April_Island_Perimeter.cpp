#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int p=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1)
                    p+=4;
                if(i>0 && (grid[i][j]==1 && grid[i-1][j]==1))
                    p-=2;
                if(j>0 && (grid[i][j]==1 && grid[i][j-1]==1))
                    p-=2;
            }
        }
        return p;
    }
};
int main() {
    Solution s;
    // vector<vector<int>> v = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    vector<vector<int>> v = {{1}};
    cout<<s.islandPerimeter(v)<<endl;
    return 0;
}