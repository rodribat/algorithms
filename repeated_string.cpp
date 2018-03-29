#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    
    int count = 0;
    int partial_count = 0;
    for (int i=0; i<s.length(); i++)
        if (s[i]=='a')
        {
            count++;
            if (i < n % s.length())
                partial_count++;
        }
    
    return count*(n/s.length()) + partial_count;
}

int main() {
    string s;
    cin >> s;
    long n;
    cin >> n;
    long result = repeatedString(s, n);
    cout << result << endl;
    return 0;
}
