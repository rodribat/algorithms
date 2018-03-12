#include <bits/stdc++.h>

using namespace std;

int maximizingXor(int l, int r) {
    
    int max = INT_MIN;
    
    for (int a=l; a<=r; a++)
        for (int b=a; b<=r; b++)
        {
            int ans = a^b;
            if (ans > max)
                max = ans;
        }
    
    return max;
    
}

int main() {
    int l;
    cin >> l;
    int r;
    cin >> r;
    int result = maximizingXor(l, r);
    cout << result << endl;
    return 0;
}
