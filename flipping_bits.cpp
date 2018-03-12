#include <bits/stdc++.h>

using namespace std;

unsigned int flippingBits(long N) {
    unsigned int ans = N^ULONG_MAX;
    return ans;
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        unsigned int N;
        cin >> N;
        unsigned int result = flippingBits(N);
        cout << result << endl;
    }
    return 0;
}
