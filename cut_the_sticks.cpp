#include <bits/stdc++.h>

using namespace std;

bool IsZero(int i) { return i==0; }

vector <int> cutTheSticks(vector <int> arr) {

    vector<int> sticks_left;
    
    do
    {
        sticks_left.push_back(arr.size());
        
        //find the minimum stick length
        int min = *min_element(arr.begin(), arr.end());
        
        //cut min from existing sticks
        for (int i=0; i<arr.size(); i++)
            arr[i] -= min;
        
        //remove those
        arr.erase(remove_if(arr.begin(), arr.end(), IsZero), arr.end());
    }
    while (arr.size() > 0);

    return sticks_left;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = cutTheSticks(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
