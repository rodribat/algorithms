#include <bits/stdc++.h>

using namespace std;

int SumHourglass(vector<vector<int>> arr, int r, int c) {
    
    int sum = arr[r][c] + arr[r][c+1] + arr[r][c+2]
                       + arr[r+1][c+1]
            + arr[r+2][c] + arr[r+2][c+1] + arr[r+2][c+2];
    
    return sum;
}

int array2D(vector<vector<int>> arr) {
    
    int max = INT_MIN;
    for (int i=0; i<arr.size()-2; i++)
        for (int j=0; j<arr[0].size()-2; j++)
            max = std::max(max, SumHourglass(arr, i, j));
    
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int arr_row_itr = 0; arr_row_itr < 6; arr_row_itr++) {
        arr[arr_row_itr].resize(6);

        for (int arr_column_itr = 0; arr_column_itr < 6; arr_column_itr++) {
            cin >> arr[arr_row_itr][arr_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = array2D(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
