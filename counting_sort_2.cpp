#include <bits/stdc++.h>

using namespace std;

void printCountingSort(vector<int> arr)
{
    for (ssize_t i=0; i<arr.size(); i++)
        for (ssize_t j=0; j<arr[i]; j++)
            cout << i << (i == arr.size() - 1 && j == arr[i]-1 ? "" : " ");
}

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
    printCountingSort(result);
    cout << endl;

    return 0;
}
