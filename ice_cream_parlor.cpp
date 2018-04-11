#include <bits/stdc++.h>

using namespace std;

//linear solution
vector <int> icecreamParlor(int m, vector <int> arr) {
    
    vector<int> ret;
    map<int, int> freq; //the frequency of elements with price i
    
    for (int i=0; i<arr.size(); i++)
        freq[arr[i]]++;
    
    int i = 0;
    for (i=0; i<arr.size(); i++)
        if ((m-arr[i] != arr[i] && freq[m-arr[i]] >= 1) || (m-arr[i] == arr[i] && freq[m-arr[i]] >= 2))
        {
            ret.push_back(i+1);
            break;
        }
    
    for (int j=0; j<arr.size(); j++)
        if (j!=i && arr[j] == m-arr[i])
        {
            ret.push_back(j+1);
            break;
        }
    
    return ret;
}

//quadratic solution
vector <int> icecreamParlorOld(int m, vector <int> arr) {    
    vector<int> ret;
    for (int i=0; i<arr.size(); i++)
        for (int j=i; j<arr.size(); j++)
            if (i!=j && arr[i]+arr[j]==m)
            {
                ret.push_back(i+1);
                ret.push_back(j+1);
            }
    
    if (ret[0]>ret[1])
        swap(ret[0], ret[1]);
    
    return ret;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int m;
        cin >> m;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        vector <int> result = icecreamParlor(m, arr);
        for (ssize_t i = 0; i < result.size(); i++) {
            cout << result[i] << (i != result.size() - 1 ? " " : "");
        }
        cout << endl;


    }
    return 0;
}
