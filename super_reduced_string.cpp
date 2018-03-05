#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    
    bool changed;
    
    do
    {
        if (s.length() == 1)
            break;
        
        changed = false;

        for (int i=1; i<s.length(); i++)
            if (s[i-1] == s[i])
            {
                s.erase(i-1,2);
                changed = true;
                break;
            }
        
    } while (changed);
    
    return s==""?"Empty String":s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
