#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    
    int max_height = INT_MIN;
    for (int i=0; i<word.size(); i++)
        max_height = max(max_height, h[word[i]-97]);
    
    return max_height * word.size();
}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}
