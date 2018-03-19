#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    
    int h=0;
    int valleys=0;
    for (int i=0; i<s.size(); i++)
        if (s[i]=='U')
            h++;
        else
        {
            if (h==0)
                valleys++;
            h--;
        }
    
    return valleys;            
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = countingValleys(n, s);
    cout << result << endl;
    return 0;
}
