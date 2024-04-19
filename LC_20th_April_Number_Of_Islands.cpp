#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    // int numIslands(vector<vector<char>>& grid) {
        // int m = grid.size(), n = grid[0].size(), count = 1;
        // for(int i=0;i<m;i++)
        //     for(int j=0;j<n;j++)
        //         if(grid[i][j] == '1' && (i==0 || grid[i-1][j]=='0' ) && (i==m-1 || grid[i+1][j]=='0') && (j==0 || grid[i][j-1]=='0') && (j==n-1 || grid[i][j+1]=='0'))
        //             count++;
        // return count;

    // }
  int numIslands(vector<vector<char>>& grid) {
    int ans = 0;

    for (int i = 0; i < grid.size(); ++i)
      for (int j = 0; j < grid[0].size(); ++j)
        if (grid[i][j] == '1') {
          dfs(grid, i, j);
          ++ans;
        }

    return ans;
  }

 private:
  void dfs(vector<vector<char>>& grid, int i, int j) {
    if (i < 0 || i == grid.size() || j < 0 || j == grid[0].size())
      return;
    if (grid[i][j] != '1')
      return;

    grid[i][j] = '2';  // Mark '2' as visited.
    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
  }
};
int main() {
    Solution s;
    vector<vector<char>> v{
  {'1','1'}
}; 
//     vector<vector<char>> v{
//   {'1','1','0','0','0'},
//   {'1','1','0','0','0'},
//   {'0','0','1','0','0'},
//   {'0','0','0','1','1'}
// }; 
cout<<s.numIslands(v);
}