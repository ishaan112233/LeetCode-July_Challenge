class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        if(numCourses == 0){
            return {};
        }    
        // vector<int>*adjList = new vector<int>[numCourses];
        vector<int>inDegree(numCourses,0);
        vector<vector<int>> graph(numCourses);
        
        for(auto pre:prerequisites)
        {
            graph[pre[1]].push_back(pre[0]);
            inDegree[pre[0]]++;
        }
        
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(inDegree[i] == 0){
                q.push(i);
            }
        }
        // int count = 0;
        vector<int>topOrder;
        while(!q.empty()){
            int s = q.front();
            q.pop();
            topOrder.push_back(s);
            for(auto i: graph[s]){
                // inDegree[i]--;
                if(--inDegree[i] == 0){
                    q.push(i);
                }
            }
        }
        if(topOrder.size() == numCourses){
            return topOrder;
        }
        return {};
    

    }
};