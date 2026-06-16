class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        std::vector<std::vector<int>> adj (numCourses);

        for (int i = 0; i < prerequisites.size(); i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];

            adj[v].push_back(u);
        }

        //indegree
        std::vector<int> inDegree (adj.size());
        for (int i = 0; i < adj.size(); i++){
            for (int v : adj[i]){
                inDegree[v]++;
            }
        }

        std::queue<int> myQ;
        for (int i = 0; i < inDegree.size(); i++){
            if (inDegree[i] == 0){
                myQ.push(i);
            }
        }

        int index = 0;

        while ( !myQ.empty() ){

            int u = myQ.front(); myQ.pop();
            index++;
            for (int v: adj[u]){
                inDegree[v] --;
                if (inDegree[v] == 0){
                    myQ.push(v);
                }
            }
        }

        return (index == numCourses);
        
    }
};
