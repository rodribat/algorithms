#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector <int> arr) {
    map<int, int> m;
    for (int i=0; i<arr.size(); i++)
        m[arr[i]]++;
    
    //search for most common element
    int max_occur = INT_MIN;
    for (auto p:m)
        max_occur = max(max_occur, p.second);
    
    return arr.size()-max_occur;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = equalizeArray(arr);
    cout << result << endl;
    return 0;
}
