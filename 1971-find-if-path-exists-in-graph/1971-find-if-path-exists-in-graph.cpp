class Solution {
public:
    bool dfs(int node, int dest, vector<vector<int>>& adj, vector<int>& vis) {
        if (node == dest)
            return true;

        vis[node] = 1;
        for (int x : adj[node]) {
            if (vis[x] == 0) {
                if (dfs(x, dest, adj, vis))
                    return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n, 0);
        return dfs(source, destination, adj, vis);
    }
};