#include <bits/stdc++.h>

using namespace std;

vector <int> serviceLane(vector<int> width, vector < vector<int> > cases) {
    
    vector<int> ans;
    
    for (int i=0; i<cases.size(); i++)
    {
        int curr_min = INT_MAX;
        int start = cases[i][0];
        int end = cases[i][1];
        
        for (int j=start; j<=end; j++)
            if (width[j] < curr_min)
            curr_min = width[j];
        
        ans.push_back(curr_min);
    }
    
    return ans;
}

int main() {
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0; width_i < n; width_i++){
       cin >> width[width_i];
    }
    vector< vector<int> > cases(t,vector<int>(2));
    for(int cases_i = 0;cases_i < t;cases_i++){
       for(int cases_j = 0;cases_j < 2;cases_j++){
          cin >> cases[cases_i][cases_j];
       }
    }
    vector <int> result = serviceLane(width, cases);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;

    return 0;
}
