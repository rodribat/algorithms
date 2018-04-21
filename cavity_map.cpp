#include <bits/stdc++.h>

using namespace std;

vector <string> cavityMap(vector <string> grid) {
    
    if (grid.size()<3)
        return grid;
    
    vector<string> g(grid);
    
    for (int lin=1; lin<grid.size()-1; lin++)
        for (int col=1; col<grid[0].length()-1; col++)
            if ((int)grid[lin][col]>(int)grid[lin][col-1]
               && (int)grid[lin][col]>(int)grid[lin][col+1]
               && (int)grid[lin][col]>(int)grid[lin-1][col]
               && (int)grid[lin][col]>(int)grid[lin+1][col])
                    g[lin][col] = 'X';
    return g;
}

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    vector <string> result = cavityMap(grid);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
