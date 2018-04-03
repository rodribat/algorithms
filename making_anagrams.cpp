#include <bits/stdc++.h>

using namespace std;

int makingAnagrams(string s1, string s2){
    
    map<char, int> m;
    for (int i=0; i<s1.length(); i++)
        m[s1[i]]++;
    
    for (int j=0; j<s2.length(); j++)
        m[s2[j]]--;
    
    int deletions = 0;
    map<char, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        deletions += abs(it->second);
    
    return deletions;
}

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = makingAnagrams(s1, s2);
    cout << result << endl;
    return 0;
}
