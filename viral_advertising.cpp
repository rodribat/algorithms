#include <bits/stdc++.h>

using namespace std;

//recursive version
int viralAdvertising(int n, int received)
{
    if (n==0)
        return 0;
    
    return floor(received/2) //how many liked
        + viralAdvertising(n-1, floor(received/2)*3); //how many will like from those who will receive
}

int viralAdvertisingRec(int n)
{
    return viralAdvertising(n, 5);
}

//iterative version
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
    int result = viralAdvertisingRec(n);
    cout << result << endl;
    return 0;
}
