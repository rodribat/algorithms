#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin >> a[i];
    
    rotate(a.begin(), a.begin()+d, a.end());
    
    for (int i = 0; i < n; i++)
        cout << a[i] << (i==n-1?"":" ");
    cout << endl;
    
    return 0;
}

