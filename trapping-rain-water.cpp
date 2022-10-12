#include <bits/stdc++.h>
using namespace std;
 
// Stores the direction of all the
// adjacent cells
vector<vector<int> > dir
    = { { -1, 0 }, { 0, 1 }, { 1, 0 }, { 0, -1 } };
 
// Node structure
struct node {
 
    int height;
    int x, y;
};
 
// Comparator function to implement
// the min heap using priority queue
struct Compare {
 
    // Comparator function
    bool operator()(node const& a, node const& b)
    {
        return a.height > b.height;
    }
};
 
// Function to find the amount of water
// the matrix is capable to hold
int trapRainWater(vector<vector<int> >& heightMap)
{
    int M = heightMap.size();
    int N = heightMap[0].size();
 
    // Stores if a cell of the matrix
    // is visited or not
    vector<vector<bool> > visited(M,
                                  vector<bool>(N, false));
 
    // Initialize a priority queue
    priority_queue<node, vector<node>, Compare> pq;
 
    // Traverse over the matrix
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
 
            // If element is not on
            // the boundary
            if (!(i == 0 || j == 0 || i == M - 1
                  || j == N - 1))
                continue;
 
            // Mark the current cell
            // as visited
            visited[i][j] = true;
 
            // Node for priority queue
            node t;
            t.x = i;
            t.y = j;
            t.height = heightMap[i][j];
 
            // Pushe all the adjacent
            // node in the pq
            pq.push(t);
        }
    }
 
    // Stores the total volume
    int ans = 0;
 
    // Stores the maximum height
    int max_height = INT_MIN;
 
    // Iterate while pq is not empty
    while (!pq.empty()) {
 
        // Store the top node of pq
        node front = pq.top();
 
        // Delete the top element of pq
        pq.pop();
 
        // Update the max_height
        max_height = max(max_height, front.height);
 
        // Stores the position of the
        // current cell
        int curr_x = front.x;
        int curr_y = front.y;
 
        for (int i = 0; i < 4; i++) {
 
            int new_x = curr_x + dir[i][0];
            int new_y = curr_y + dir[i][1];
 
            // If adjacent cells are out
            // of bound or already visited
            if (new_x < 0 || new_y < 0 || new_x >= M
                || new_y >= N || visited[new_x][new_y]) {
                continue;
            }
 
            // Stores the height of the
            // adjacent cell
            int height = heightMap[new_x][new_y];
 
            // If height of current cell
            // is smaller than max_height
            if (height < max_height) {
 
                // Increment the ans by
                // (max_height-height)
                ans = ans + (max_height - height);
            }
 
            // Define a new node
            node temp;
            temp.x = new_x;
            temp.y = new_y;
            temp.height = height;
 
            // Push the current node
            // in the pq
            pq.push(temp);
 
            // Mark the current cell
            // as visited
            visited[new_x][new_y] = true;
        }
    }
 
    return ans;
}
 
// Driver Code
int main()
{
    vector<vector<int> > arr = { { 1, 4, 3, 1, 3, 2 },
                                 { 3, 2, 1, 3, 2, 4 },
                                 { 2, 3, 3, 2, 3, 1 } };
    cout << trapRainWater(arr);
 
    return 0;
}
