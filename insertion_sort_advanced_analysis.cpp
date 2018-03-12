#include <bits/stdc++.h>

using namespace std;

void print(vector<pair<int, int> > arr)
{
    for (int i=0; i<arr.size(); i++)
        cout << arr[i].first << " ";
    cout << endl;
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return (p1.first < p2.first);
}

int insertionSort(vector <int> arr) {
    
    vector<pair<int, int> > v;
    for (int i=0; i<arr.size(); i++)
        v.push_back(make_pair(arr[i], i));
    
    stable_sort(v.begin(), v.end(), comp);
    
    int changes = 0;
    for (int i=0; i<v.size(); i++)
        changes += abs(v[i].second - i);
    
    return changes/2;
}

/*
int insertionSort(vector <int> arr) {
    
    vector<pair<int, int> > v;
    for (int i=0; i<arr.size(); i++)
        v.push_back(make_pair(arr[i], i));
    
    vector<int> k(arr.size(), 0);
    for (int i=1; i<v.size(); i++)
    {
        for (int j=v.size()-1; j>=1; j--)
        {
            if (v[j-1].first > v[j].first)
            {
                swap(v[j], v[j-1]);
                k[v[j].second]++;
            }
            else
                continue;
        }
        //print(v);
    }
    
    int sum = 0;
    for (auto& n: k)
        sum += n;
    
    return sum;
}
*/

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        int result = insertionSort(arr);
        cout << result << endl;
    }
    return 0;
}
