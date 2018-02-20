#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector< vector<bool> > visited(10, vector<bool>(10, false));

int dfs(int row, int column, vector< vector<int> > grid)
{
    if (row<0 || column<0)
        return 0;
    
    if (row>=grid.size() || column>=grid[0].size())
        return 0;
    
    if (visited[row][column])
        return 0;
    
    if (grid[row][column] == 0)
        return 0;
    
    visited[row][column] = true;
    
    return 1 + dfs(row-1, column-1, grid) + dfs(row-1, column, grid) + dfs(row-1, column+1, grid)
        + dfs(row, column-1, grid) + dfs(row, column+1, grid) + dfs(row+1, column-1, grid)
        + dfs(row+1, column, grid) + dfs(row+1, column+1, grid);
}

int get_biggest_region(vector< vector<int> > grid, int rows, int columns) {
    
    if (rows==0 || columns==0)
        return 0;
    
    int max_region = 0;
    
    for (int i=0; i<rows; ++i)
        for (int j=0; j<columns; ++j)
            if (!visited[i][j])
                max_region = max(max_region, dfs(i, j, grid));
    
    return max_region;
}

int main(){
    int n; // rows
    cin >> n;
    int m; // columns
    cin >> m;
    vector< vector<int> > grid(n,vector<int>(m));
    for(int grid_i = 0;grid_i < n;grid_i++){
       for(int grid_j = 0;grid_j < m;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    cout << get_biggest_region(grid, n, m) << endl;
    return 0;
}
