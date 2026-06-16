class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        std::vector<std::vector<int>> adj (numCourses);

        for (int i = 0; i < prerequisites.size(); i++){

            int x = prerequisites[i][0];
            int y = prerequisites[i][1];

            adj[y].push_back(x);
        }

        std::vector<int> inDegree (numCourses);

        for (int i = 0; i < numCourses; i++){
            for (int v: adj[i]) {
                inDegree[v]++;
            }
        }

        std::queue<int> myQ;

        for (int i = 0; i < numCourses; i++){
            if ( !inDegree[i] ){
                myQ.push(i);
            }
        }

        int index = 0;
        std::vector<int> order(numCourses);

        while ( !myQ.empty() ){
            int u = myQ.front(); myQ.pop();
            order[index] = u;
            index++;

            for (int v: adj[u]){
                inDegree[v] --;
                if ( !inDegree[v] ){
                    myQ.push(v);
                }
            }
        }

        if ( index == numCourses){
            return order;
        }
        
        return {};
    }
};
