#include <bits/stdc++.h>

using namespace std;

int runningTime(vector <int> arr) {
    int n = arr.size();
    int shifts = 0;
    
    for (int k=1; k<n; k++)
    {
        int value = arr[k];
        int i = k-1;
        while (arr[i] > value)
        {
            arr[i+1] = arr[i];
            i--;
            shifts++;
        }
        
        arr[i+1] = value;
    }
    
    return shifts;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = runningTime(arr);
    cout << result << endl;
    return 0;
}
