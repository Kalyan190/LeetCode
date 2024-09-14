class Solution {
public:
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();

        // BFS queue stores tuples of (row, col, health)
        queue<tuple<int, int, int>> q;
        q.push({0, 0,health - grid[0][0]}); 

       
        vector<vector<int>> visited(m, vector<int>(n, -1));
        visited[0][0] = health - grid[0][0]; 

        while (!q.empty()) {
            auto [x, y, currentHealth] = q.front();
            q.pop();

            
            if (currentHealth <= 0) {
                continue;
            }

         
            if (x == m - 1 && y == n - 1) {
                if (currentHealth > 0) {
                    return true; 
                }
            }

            
            for (auto [dx, dy] : directions) {
                int newX = x + dx;
                int newY = y + dy;

                if (newX >= 0 && newX < m && newY >= 0 && newY < n) {
                    int newHealth = currentHealth - grid[newX][newY];

                    if (newHealth > 0 && newHealth > visited[newX][newY]) {
                        visited[newX][newY] = newHealth;
                        q.push({newX, newY, newHealth});
                    }
                }
            }
        }

        return false;
    }
};