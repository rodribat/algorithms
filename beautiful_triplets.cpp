#include <bits/stdc++.h>

using namespace std;

//using index inversion
int beautifulTriplets(int d, vector <int> arr) {
    int a[200041];
    for (int i=0; i<arr.size(); i++)
        a[arr[i]]++;
    
    int triplets = 0;
    for (int i=0; i<arr.size()-2 && arr[i]+2*d < 20041; i++)
        if (a[arr[i]+d] + a[arr[i]+2*d] == 2)
            triplets++;
    
    return triplets;
}

//brute force version
int beautifulTripletsBF(int d, vector <int> arr) {
    
    int triplets = 0;
    for (int i=0; i<arr.size()-2; i++)
        for (int j=i+1; j<arr.size()-1; j++)
        {
            if (arr[j]-arr[i] != d)
                continue;
            
            for (int k=j+1; k<arr.size(); k++)
            {
                if (arr[k]-arr[j] != d)
                    continue;
                
                triplets++;
            }
        }
    return triplets;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = beautifulTriplets(d, arr);
    cout << result << endl;
    return 0;
}
