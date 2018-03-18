#include <bits/stdc++.h>

using namespace std;

string solve(int year){

    ostringstream s;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    bool leap = false;
    if ((year < 1918 && year%4 == 0) || (year > 1918 && (year%400==0 || (year%4==0 && year%100!=0))))
        leap = true;
    
    int day = 256;
    int month = 1;
    
    if (year == 1918)
        day += 13;
    
    for (int i=0; day>days[i]; i++)
    {
        day -= days[i];
        if (i==1 && leap)
            day--;
        month++;
    }

    s << setw(2) << setfill('0') << day << "." << setw(2) << setfill('0') << month << "." << year;
    
    return s.str();
    
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
