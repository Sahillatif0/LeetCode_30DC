#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        vector<vector<int>> temp(n, vector<int>(m, 0));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                int cnt = 0;
                if(i>0 && board[i-1][j]==1)
                    cnt++;
                if(i<n-1 && board[i+1][j]==1)
                    cnt++;
                if(j>0 && board[i][j-1]==1)
                    cnt++;
                if(j<m-1 && board[i][j+1]==1)
                    cnt++;
                if(i>0 && j>0 && board[i-1][j-1]==1)
                    cnt++;
                if(i>0 && j<m-1 && board[i-1][j+1]==1)
                    cnt++;
                if(i<n-1 && j>0 && board[i+1][j-1]==1)
                    cnt++;
                if(i<n-1 && j<m-1 && board[i+1][j+1]==1)
                    cnt++;
                if(board[i][j]==0)
                    temp[i][j] = cnt==3?1:0;
                else
                    temp[i][j] = (cnt==2 || cnt==3)?1:0; 
            }
        board = temp;
    }
};
int main() {
    Solution s;
    vector<vector<int>> v{
        {0,1,0},
        {0,0,1},
        {1,1,1},
        {0,0,0}
    };
    s.gameOfLife(v);
    for(auto i:v){
        for(auto j:i)
            cout<<j<<" ";
        cout<<endl;
    }
}