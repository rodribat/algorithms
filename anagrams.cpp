#include <bits/stdc++.h>

using namespace std;

int anagram(string s){
    
    if (s.length() % 2 == 1)
        return -1;
    
    map<char, int> hist;
    for (int i=0; i<s.length(); i++)
        if (i<s.length()/2)
            hist[s[i]]++;
        else
            hist[s[i]]--;
    
    int sum = 0;
    map<char, int>::iterator it = hist.begin();
    for (;it!=hist.end(); it++)
        if (it->second>0) //sums only positive numbers to consider replacement
            sum += it->second;
    
    return sum;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = anagram(s);
        cout << result << endl;
    }
    return 0;
}
