class Solution {
public:

    bool dfs(int u, int prev, std::vector<std::vector<int>>& adj, std::unordered_set<int>& visited) {

        
        visited.insert(u);

        for ( int v: adj[u] ){

            if( !visited.contains(v)){
                 
                if (!dfs(v, u, adj, visited)){
                    return false;
                }
            }

            else if ( v!= prev ){
                return false;
            }           

        }
        return true;
    }


    bool validTree(int n, vector<vector<int>>& edges) {


        std::vector<std::vector<int>> adj (n);
        std::unordered_set<int> visited ;

        int prev = -1;
        int s = 0;


        for (int i = 0; i < edges.size(); i++){

            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        if ( !dfs(s, prev, adj, visited) ){
            return false;
        }

        return (visited.size() == n);  

    }
    
};
