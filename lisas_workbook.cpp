#include <bits/stdc++.h>

using namespace std;

int workbook(int n, int k, vector <int> arr) {
    int page = 0;
    int specials = 0;
    
    for (int i=1; i<=n; i++)
        for (int j=1; j<=arr[i]; j++)
        {
            if (j%k==1)
                page++;
            
            if (j==page)
                specials++;
        }
    
    return specials;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = workbook(n, k, arr);
    cout << result << endl;
    return 0;
}
