#include <bits/stdc++.h>

using namespace std;

string encryption(string s) {
    
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    
    float l_sqrt = sqrt(s.size());
    int rows = floor(l_sqrt);
    int columns = ceil(l_sqrt);
    
    //ensures that rows x columns fits in the matrix
    if (rows*columns < s.length())
        rows++;
    
    stringstream encrypted;
    
    for (int i=0; i<columns; i++)
    {
        for (int j=0; j<rows; j++)
            if (j*columns + i < s.size())
                encrypted << s[j*columns + i];
        encrypted << ' ';
    }
    
    return encrypted.str();
}

int main() {
    string s;
    cin >> s;
    string result = encryption(s);
    cout << result << endl;
    return 0;
}
