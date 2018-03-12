#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s) {
    
    int count = 0;
    for (int i=0; i<s.length(); i++)
        switch(i%3)
        {
            case 0:
            case 2:
                if (s[i] != 'S')
                    count++;
                break;
            case 1:
                if (s[i] != 'O')
                    count++;
                break;
        }
    
    return count;
}

int main() {
    string s;
    cin >> s;
    int result = marsExploration(s);
    cout << result << endl;
    return 0;
}
