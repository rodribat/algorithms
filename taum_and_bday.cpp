#include <bits/stdc++.h>

using namespace std;

long taumBday(long b, long w, long x, long y, long z) {
    
	//selects the minimum cost among no conversion, converting whites and converting blacks
    return min(b*x+w*y, min(b*x+w*(x+z), b*(y+z)+w*y));
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int b;
        int w;
        cin >> b >> w;
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        long result = taumBday(b, w, x, y, z);
        cout << result << endl;
    }
    return 0;
}
