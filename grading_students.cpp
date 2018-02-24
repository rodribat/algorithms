#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    
    vector < int > final;
    for (ssize_t i = 0; i < grades.size(); i++){
        
        if (grades[i] < 38)
            final.push_back(grades[i]);
        else
        {
            int next = ((grades[i] / 5) + 1) * 5;
            if (next - grades[i] < 3)
                final.push_back(next);
            else
                final.push_back(grades[i]);
        }
    }
    
    return final;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
