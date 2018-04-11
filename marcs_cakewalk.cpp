#include <bits/stdc++.h>

using namespace std;

bool desc(int a, int b)
{
    if (a>=b)
        return true;
    else
        return false;
}

long marcsCakewalk(vector <int> calorie) {
    long miles = 0;
    
    //sorts cupcacke list by calorie
    sort(calorie.begin(), calorie.end(), desc);
    
    for (int i=0; i<calorie.size(); i++)
        miles += 1LL*calorie[i]<<i; //force implicit conversion
    
    return miles;
}

int main() {
    int n;
    cin >> n;
    vector<int> calorie(n);
    for(int calorie_i = 0; calorie_i < n; calorie_i++){
       cin >> calorie[calorie_i];
    }
    long result = marcsCakewalk(calorie);
    cout << result << endl;
    return 0;
}
