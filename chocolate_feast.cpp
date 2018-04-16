#include <bits/stdc++.h>

using namespace std;

int chocolateFeast(int n, int paper, int c, int m) {
    
    if (n < c && paper < m)
        return 0;

    return n/c + paper/m + chocolateFeast(n%c, n/c + paper%m + paper/m, c, m);
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int result = chocolateFeast(n, 0, c, m);
        cout << result << endl;
    }
    return 0;
}
