#include <bits/stdc++.h>

using namespace std;

int calculateTopics(string s1, string s2)
{
    int n = s1.length();
    int topics = 0;
    for (int i=0; i<n; i++)
        if (s1[i]=='1' || s2[i]=='1')
            topics++;
    return topics;
}

vector<int> acmTeam(vector<string> topic) {
    
    int att = topic.size();
    int topics = topic[0].length();
    
    map<int, int> dtopics; //<max_topics, freq>
    int max = 0;
    for (int i=0; i<att; i++)
        for (int j=0; j<att; j++)
            if (i>j)
            {
                int n_topics = calculateTopics(topic[i], topic[j]);
                dtopics[n_topics]++;
                max = std::max(max, n_topics);
            }
    
    vector<int> ans;
    ans.push_back(max);
    ans.push_back(dtopics[max]);
    return ans;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0; topic_i < n; topic_i++){
       cin >> topic[topic_i];
    }
    vector <int> result = acmTeam(topic);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
