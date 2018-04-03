#include <bits/stdc++.h>

using namespace std;

string timeInWords(int h, int m) {
    
    string str[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};
    
    if (m == 0) return str[h] + " o' clock";
    if (m == 1) return "one minute past " + str[h];
    if (m == 15) return "quarter past " + str[h];
    if (m == 30) return "half past " + str[h];
    if (m == 45) return "quarter to " + str[h+1];
    if (m == 59) return "one minute to " + str[h];
    if (m < 30)
        return str[m] + " minutes past " + str[h];
    else
        return str[60-m] + " minutes to " + str[h+1];
}

int main() {
    int h;
    cin >> h;
    int m;
    cin >> m;
    string result = timeInWords(h, m);
    cout << result << endl;
    return 0;
}
