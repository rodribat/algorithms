#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    
    map<int, int> m;
    
    for (int i=0; i<ar.size(); i++)
        m[ar[i]]++;
    
    int pairs = 0;
    for (map<int, int>::iterator it=m.begin(); it!= m.end(); it++)
        pairs += it->second/2;
    
    return pairs;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
