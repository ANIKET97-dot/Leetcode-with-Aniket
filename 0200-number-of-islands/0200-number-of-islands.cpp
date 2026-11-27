
class Solution {
public:
    void bfs(int i, int j, int n, int m, vector<vector<char>>& grid, vector<vector<bool>>& vis) {

        vis[i][j] = true;

        queue<pair<int, int>> q;
        q.push({i, j});

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            if (r - 1 >= 0 && !vis[r - 1][c] && grid[r - 1][c] == '1') {  //up
                q.push({r - 1, c});
                vis[r - 1][c] = true;
            }

            // Down
            if (r + 1 < n && !vis[r + 1][c] && grid[r + 1][c] == '1') {
                q.push({r + 1, c});
                vis[r + 1][c] = true;
            }

            // Left
            if (c - 1 >= 0 && !vis[r][c - 1] && grid[r][c - 1] == '1') {
                q.push({r, c - 1});
                vis[r][c - 1] = true;
            }

            // Right
            if (c + 1 < m && !vis[r][c + 1] && grid[r][c + 1] == '1') {
                q.push({r, c + 1});
                vis[r][c + 1] = true;
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        int ans = 0;

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == '1' && !vis[i][j]) {
                    bfs(i, j, n, m, grid, vis);
                    ans++;
                }
            }
        }

        return ans;
    }
};
