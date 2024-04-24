#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
 public:
  vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
    if (n == 1 || edges.empty())
      return {0};

    vector<int> ans;
    unordered_map<int, unordered_set<int>> graph;

    for (const vector<int>& edge : edges) {
      const int u = edge[0];
      const int v = edge[1];
      graph[u].insert(v);
      graph[v].insert(u);
    }

    for (const auto& [label, children] : graph)
      if (children.size() == 1)
        ans.push_back(label);

    while (n > 2) {
      n -= ans.size();
      vector<int> nextLeaves;
      for (const int leaf : ans) {
        const int u = *graph[leaf].begin();
        graph[u].erase(leaf);
        if (graph[u].size() == 1)
          nextLeaves.push_back(u);
      }
      ans = nextLeaves;
    }

    return ans;
  }
};
int main() {
 Solution s;
    vector<vector<int>> v{{1,0},{1,2},{1,3}};
    auto ans = s.findMinHeightTrees(4, v);
    for (auto i : ans) 
        cout << i << " ";
    
}