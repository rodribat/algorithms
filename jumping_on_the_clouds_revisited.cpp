#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c, int k) {
    int E = 100;
    int i=0;
    int n = c.size();
    
    do
    {
        E--;    //uses 1 unit of energy to make a jump
        i = (i+k)%n;
        
        if (c[i] == 1)
            E -= 2; //if Aerith falls in a thundercloud, then loses 2 units of energy
        
    } while (i!=0);
        
    return E;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c, k);
    cout << result << endl;
    return 0;
}
