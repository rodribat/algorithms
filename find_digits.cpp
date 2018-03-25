#include <bits/stdc++.h>

using namespace std;

//version avoiding string conversions
int findDigits(int n) {
    
    int divisors = 0;
    int d = n;
    while (d>0)
    {
        int divisor = d%10;
        d /= 10;
        
        if(divisor!=0 && n%divisor==0)
            divisors++;
    }
    
    return divisors;
}

int findDigitsOld(int n) {
    
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
