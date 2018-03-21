#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    
    if (n%2==0) n++; //if the book ends in an even page, then sums 1 for calculation
    
    int front_to_back = p/2;
    int back_to_front = (n-p)/2;
    
    return min(front_to_back, back_to_front);
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
