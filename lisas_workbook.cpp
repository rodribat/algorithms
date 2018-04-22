#include <bits/stdc++.h>

using namespace std;

int workbook(int n, int k, vector<int> arr) {
    int page = 1;
    int specials = 0;
    
    for (int i=0; i<n; i++)
    {
        int problems_in_page = 0;
        for (int j=1; j<=arr[i]; j++)
        {
            if (j==page)
                specials++;
            
            problems_in_page++;
            
            //cout << "p: " << page << " n: " << j << (j==page?" *":"") << endl;
            
            if (problems_in_page==k)
            {
                page++;
                problems_in_page = 0;
            }
        }
        
        if (problems_in_page > 0)
            page++;
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
