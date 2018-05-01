#include <bits/stdc++.h>

using namespace std;

void separateNumbers(string s) {
    
    if (s.length() == 1)
    {
        cout << "NO" << endl;
        return;
    }
    
    for (int size_of_first = 1; size_of_first <= s.length()/2; size_of_first++)
    {
        long long n = stoll(s.substr(0, size_of_first));
        long long first = n;
        
        string seq = "";
        while (seq.length() < s.length() && seq == s.substr(0, seq.length()))
        {
            seq.append(to_string(n));
            n++;
        }
        
        if (seq == s)
        {
            cout << "YES " << first << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        separateNumbers(s);
    }
    return 0;
}
