class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int provinces = 0;
    int n = isConnected.size();
    vector<bool> visited(n, false);
    
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            provinces++;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            
            while (!q.empty()) {
                int curr = q.front();
                q.pop();
                
                for (int j = 0; j < n; j++) {
                    if (isConnected[curr][j] == 1 && !visited[j]) {
                        q.push(j);
                        visited[j] = true;
                    }
                }
            }
        }
    }
    
    return provinces;
    }
};