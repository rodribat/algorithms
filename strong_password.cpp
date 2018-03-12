#include <bits/stdc++.h>

using namespace std;

int minimumNumber(int n, string password) {
    
    bool contains_digit = false;
    bool contains_lower = false;
    bool contains_upper = false;
    bool contains_special = false;
    
    string special_chars = "!@#$%^&*()-+";
    
    for (int i=0; i<password.length(); i++)
    {
        if (isdigit(password[i]))
            contains_digit = true;
        
        if (islower(password[i]))
            contains_lower = true;
        
        if (isupper(password[i]))
            contains_upper = true;
        
        if (special_chars.find(password[i]) != string::npos)
            contains_special = true;
    }
    
    int chars_to_add = 0;
    chars_to_add += contains_digit?0:1;
    chars_to_add += contains_lower?0:1;
    chars_to_add += contains_upper?0:1;
    chars_to_add += contains_special?0:1;
    
    /*
    cout << "digit " << (contains_digit?0:1) << endl;
    cout << "lower " << (contains_lower?0:1) << endl;
    cout << "upper " << (contains_upper?0:1) << endl;
    cout << "special " << (contains_special?0:1) << endl;
    */
    
    return password.length()+chars_to_add >= 6 ? chars_to_add : 6 - (password.length()+chars_to_add) + chars_to_add;
}

int main() {
    int n;
    cin >> n;
    string password;
    cin >> password;
    int answer = minimumNumber(n, password);
    cout << answer << endl;
    return 0;
}
