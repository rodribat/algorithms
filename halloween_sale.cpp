#include <bits/stdc++.h>

using namespace std;

int howManyGamesRec(int p, int d, int m, int s) {
    
    if (s < p)
        return 0;
    
    return 1 + howManyGamesRec(max(p-d, m), d, m, s-p);
}

int howManyGames(int p, int d, int m, int s) {
    
    int games = 0;
    while (s >= p)
    {
        games++;
        s -= p;
        
        p = max(p-d, m);
    }
    
    return games;
}

int main() {
    int p;
    int d;
    int m;
    int s;
    cin >> p >> d >> m >> s;
    int answer = howManyGamesRec(p, d, m, s);
    cout << answer << endl;
    return 0;
}
