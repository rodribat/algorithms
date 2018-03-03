#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    
    if (s == "")
        return 0;
    
    int words = 1;
    for (int i=0; i<s.length(); i++)
        if (isupper(s[i]))
            words++;
            
    return words;
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}
