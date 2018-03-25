#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    
    string s = std::to_string(n);
    int divisors = 0;
    
    for (int i=0; i<s.length(); i++)
    {
        //string to int conversion
        int divisor;
        stringstream convert(string(1,s[i]));
        convert >> divisor;
        
        if (divisor !=0 && n % divisor == 0) //division by zero avoidance
            divisors++;
    }
    
    return divisors;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = findDigits(n);
        cout << result << endl;
    }
    return 0;
}
