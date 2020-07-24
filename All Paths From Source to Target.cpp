class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        if(graph.size() == 0){
            return {};
        }    
        vector<vector<int>>res;
        vector<int>cur;
        cur.emplace_back(0);
        dfs(0, cur, res, graph, graph.size()-1);
        return res;
    }
    void dfs(int src, vector<int>cur, vector<vector<int>>&res, vector<vector<int>>graph, int dest){
        if(src == dest){
            res.emplace_back(cur);
            return;
        }
        for(auto i: graph[src]){
            cur.emplace_back(i);
            dfs(i, cur, res, graph, dest);
            cur.pop_back();
        }
    }
};