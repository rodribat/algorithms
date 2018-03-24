#include <bits/stdc++.h>

using namespace std;

bool notLate(int i) { return i<=0; }

string angryProfessor(int k, vector <int> a) {
    
    int count = count_if(a.begin(), a.end(), notLate);
    
    return count<k?"YES":"NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = angryProfessor(k, a);
        cout << result << endl;
    }
    return 0;
}
