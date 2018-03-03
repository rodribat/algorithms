#include <bits/stdc++.h>

using namespace std;

vector <int> quickSort(vector <int> arr) {
    int p = arr[0]; //pivot
    
    vector<int> left, equals, right;
    vector<int>::iterator it;
    for (it=arr.begin(); it!=arr.end(); it++)
        if (*it<p)
            left.push_back(*it);    
        else if (*it>p)
            right.push_back(*it);
        else
            equals.push_back(*it);
    
    vector<int> r;
    r.insert(r.end(), left.begin(), left.end());
    r.insert(r.end(), equals.begin(), equals.end());
    r.insert(r.end(), right.begin(), right.end());
    
    return r;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = quickSort(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}
