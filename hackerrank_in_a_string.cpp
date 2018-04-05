#include <bits/stdc++.h>

using namespace std;

string hackerrankInString(string s) {
    string hr = "hackerrank";
    
    int p=0;
    for (int i=0; i<s.size(); i++)
        if (s[i]==hr[p])
            p++;
    
    if (p==10)
        return "YES";
    else
        return "NO";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = hackerrankInString(s);
        cout << result << endl;
    }
    return 0;
}
