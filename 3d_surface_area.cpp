#include <bits/stdc++.h>

using namespace std;

int surfaceArea(int H, int W, vector < vector<int> > A) {
    
    int area = 2*H*W;
    
    //traverse rows
    for (int i=0; i<H; i++)
    {
        area += A[i][0];
        for (int j=1; j<W; j++)
            area += abs(A[i][j] - A[i][j-1]);
        area += A[i][W-1];
    }
    
    //traverse columns
    for (int j=0; j<W; j++)
    {
        area += A[0][j];
        for (int i=1; i<H; i++)
            area += abs(A[i][j] - A[i-1][j]);
        area += A[H-1][j];
    }
    
    return area;
}

int main() {
    int H;
    int W;
    cin >> H >> W;
    vector< vector<int> > A(H,vector<int>(W));
    for(int A_i = 0;A_i < H;A_i++){
       for(int A_j = 0;A_j < W;A_j++){
          cin >> A[A_i][A_j];
       }
    }
    int result = surfaceArea(H, W, A);
    cout << result << endl;
    return 0;
}
