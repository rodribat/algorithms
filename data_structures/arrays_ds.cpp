#include <bits/stdc++.h>

using namespace std;

void print(vector<int> arr)
{
    for (vector<int>::reverse_iterator rit = arr.rbegin(); rit != arr.rend(); rit++)
        cout << *rit << (rit!=arr.rend()?" ":"");
    cout << endl;
    
    return;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int arr_itr = 0; arr_itr < n; arr_itr++) {
        int arr_item;
        cin >> arr_item;

        arr[arr_itr] = arr_item;
    }
    
    print(arr);

    return 0;
}
