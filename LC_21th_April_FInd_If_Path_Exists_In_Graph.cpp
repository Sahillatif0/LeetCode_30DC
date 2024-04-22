#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        for(auto i:edges){
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }
        vector<bool> visited(n, false);
        return dfs(graph, visited, source, destination);
    }
    bool dfs(vector<vector<int>>& graph, vector<bool>& visited, int source, int destination){
        if(source == destination)
            return true;
        visited[source] = true;
        for(auto i:graph[source])
            if(!visited[i] && dfs(graph, visited, i, destination))
                return true;
        return false;
    }
};
int main() {
    Solution s;
    vector<vector<int>> v{{0,1},{1,2},{2,0}};
    cout<<s.validPath(3, v, 0, 2);
}