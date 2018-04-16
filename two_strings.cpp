#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2){
    
    set<char> s;
    
    for (int i=0; i<s1.length(); i++)
        s.insert(s1[i]);
    
    for (int j=0; j<s2.length(); j++)
        if (s.find(s2[j]) != s.end())
            return "YES";
    
    return "NO";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}
