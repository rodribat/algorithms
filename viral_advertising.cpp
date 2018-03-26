#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    int received = 5;
    int liked = 0;
    int total_liked = 0;
    
    for (int i=0; i<n; i++)
    {
        liked = floor(received/2);
        received = liked * 3;
        
        total_liked += liked;
    }
    
    return total_liked;
}

int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}
