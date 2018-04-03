#include <bits/stdc++.h>

using namespace std;

int minimumDistances(vector <int> a) {
    
    int min = INT_MAX;
    
    for (int i=0; i<a.size(); i++)
        for (int j=i; j<a.size(); j++)
            if (i != j && a[i] == a[j])
                min = std::min(min, abs(i-j));
    
    return min==INT_MAX?-1:min;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = minimumDistances(a);
    cout << result << endl;
    return 0;
}
