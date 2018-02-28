#include <bits/stdc++.h>

using namespace std;

vector <int> countingSort(vector <int> arr) {
    
    vector<int>::iterator it;
    vector<int> count(100, 0);
    
    for (it = arr.begin(); it != arr.end(); it++)
        count[*it]++;
    
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = countingSort(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}
