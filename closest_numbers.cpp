#include <bits/stdc++.h>

using namespace std;

vector <int> closestNumbers(vector <int> arr) {
    
    sort(arr.begin(), arr.end());
    
    vector<int> v;
    int curr_min = INT_MAX;
    for (int i=1; i<arr.size(); i++)
    {
        int diff = arr[i]-arr[i-1];
        if (diff < curr_min)
        {
            curr_min = diff;
            v.clear();
            v.push_back(arr[i-1]);
            v.push_back(arr[i]);
        }
        else if (diff == curr_min)
        {
            v.push_back(arr[i-1]);
            v.push_back(arr[i]);
        }
    }
    
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = closestNumbers(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
