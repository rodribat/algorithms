#include <bits/stdc++.h>

using namespace std;

void print(vector<int> arr);

void insertionSort2(int n, vector <int> arr) {
    
    if (n == 1)
        return;
    
    for (int k=1; k<n; k++)
    {
        //inserts ith element
        int aux = arr[k];
        int i = k-1;
        
        while (arr[i] > aux)
        {
            arr[i+1] = arr[i];
            i--;
        }
        
        arr[i+1] = aux;
        print(arr);
    }
}

void print(vector<int> arr)
{
    vector<int>::iterator it = arr.begin();
    for(; it!=arr.end(); it++)
        cout << *it << (it!=arr.end() ? " " : "");
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort2(n, arr);
    return 0;
}
