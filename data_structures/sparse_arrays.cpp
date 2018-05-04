#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    
    cin >> n;
    map<string, int> dict;
    for (int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        dict[s]++;
    }
    
    cin >> q;
    for (int j=0; j<q; j++)
    {
        string query;
        cin >> query;
        cout << dict[query] << endl;
    }
    
    return 0;
}
