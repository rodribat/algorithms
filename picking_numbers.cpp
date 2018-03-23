#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector <int> a) {
    
    sort(a.begin(), a.end());
    
    a.push_back(INT_MAX);
    int base_idx = 0;
    vector<int> groups;
    for (int i=1; i<a.size(); i++)
        if (a[i] > a[base_idx]+1)
        {
            groups.push_back(i-base_idx);
            base_idx = i;
        }
    
    if (groups.size()==0)
        return 1;
    else
        return *max_element(groups.begin(), groups.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = pickingNumbers(a);
    cout << result << endl;
    return 0;
}
