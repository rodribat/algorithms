#include <bits/stdc++.h>

using namespace std;

void print(vector<int> arr) {
    vector<int>::iterator it = arr.begin();
    for (;it!=arr.end(); it++)
        cout << *it << (it!=arr.end()-1 ? " " : "");
    cout << endl;
}

/* insertion sort using reverse iterator */
void insertionSort1_it(int n, vector <int> arr) {
    
    int aux = arr.back();
    
    vector<int>::reverse_iterator rit = arr.rbegin();
    rit++; //skips the last element
    
    while(*rit > aux)
    {
        *(rit-1) = *rit;
        rit++;
        
        print(arr);
    }
    
    *(rit-1) = aux;
    print(arr);
    
    return;
}

void insertionSort1(int n, vector <int> arr) {
    
    int aux = arr.back();
    int i = arr.size()-2;
    
    while (arr[i] > aux)
    {
        arr[i+1] = arr[i];
        i--;
        
        print(arr);
    }
    
    arr[i+1] = aux;
    print(arr);
    
    return;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort1_it(n, arr);
    return 0;
}
