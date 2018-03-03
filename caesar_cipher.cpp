#include <bits/stdc++.h>

using namespace std;

string caesarCipher(string s, int k) {
    
    k %= 26;
    
    string ret = "";
    for (int i=0; i<s.length(); i++)
        
        if (isalpha(s[i]))
        {
            if (s[i]+k > 'z')
                ret += (char)((int)s[i]+k-26);
            else if (isupper(s[i]) && s[i]+k > 'Z')
                ret += (char)((int)s[i]+k-26);
            else
                ret += (char)((int)s[i]+k);
        }
        else
            ret += s[i];
    
    return ret;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    string result = caesarCipher(s, k);
    cout << result << endl;
    return 0;
}
