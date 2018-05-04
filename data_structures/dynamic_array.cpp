#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>> seqList(n);
    int lastAnswer = 0;
    
    for (int i=0; i<q; i++)
    {
        int t, x, y;
        cin >> t >> x >> y;
    
        int idx = (x^lastAnswer) % n;
        
        if (t==1)
            seqList[idx].push_back(y);
        else
        {
            int size = seqList[idx].size();
            lastAnswer = seqList[idx][y%size];
            cout << lastAnswer << endl;
        }
    }
    return 0;
}