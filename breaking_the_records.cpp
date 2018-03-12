#include <bits/stdc++.h>

using namespace std;

vector <int> breakingRecords(vector <int> score) {
	
    int curr_max = score.front();
    int curr_min = score.front();
    int max_breaks = 0;
    int min_breaks = 0;

    for (vector<int>::iterator it=score.begin()+1; it!=score.end(); it++)
    {
        if (*it > curr_max)
        {
            curr_max = *it;
            max_breaks++;
        }

        if (*it < curr_min)
        {
            curr_min = *it;
            min_breaks++;
        }
    }

    vector<int> ans;
    ans.push_back(max_breaks);
    ans.push_back(min_breaks);

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
