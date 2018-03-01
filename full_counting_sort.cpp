#include <bits/stdc++.h>

using namespace std;

void print(vector<vector<string> > arr)
{
    for (int i=0; i<arr.size(); i++)
        for (int j = 0; j<arr[i].size(); j++)
            cout << arr[i][j] << (i==arr.size()-1 && j==arr[i].size()-1 ? "" : " ");
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<string> > v(n);
    
    for(int a0 = 0; a0 < n; a0++){
        int x;
        string s;
        cin >> x >> s;
        
        if (a0 >= n/2)
            v[x].push_back(s);
        else
            v[x].push_back("-");
    }
    
    print(v);
    
    return 0;
}
