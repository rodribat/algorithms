#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    
    int curr_max = 0; //the kind of mos frequent bird
    
    map<int, int> dict;
    for (vector<int>::iterator it=ar.begin(); it!=ar.end(); it++)
    {
        dict[*it]++;
        
        if (dict[*it] > dict[curr_max])
            curr_max = *it;
        
        if (dict[*it] == dict[curr_max])
            curr_max = min(*it, curr_max);
    }
    
    return curr_max;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
