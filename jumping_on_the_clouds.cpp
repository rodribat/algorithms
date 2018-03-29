#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c) {
    
    int i=0;
    int jumps = 0;
    
    while (i < c.size()-1)
    {
         //if  jumping two clouds falls in a thundercloud, then jumps one cloud
        if (i == c.size()-1 || c[i+2]==1)
            i++;
        else
            i+=2;
        
        jumps++;
    }
    
    return jumps;
}

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c);
    cout << result << endl;
    return 0;
}
