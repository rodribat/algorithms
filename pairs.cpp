#include <bits/stdc++.h>

using namespace std;

void print(vector<int> arr)
{
    vector<int>::iterator it = arr.begin();
    for(; it != arr.end(); it++)
        cout << *it << " ";
    cout << endl;
}

//solved with a unordered_set
int pairs2(int k, vector<int> arr)
{
    unordered_set<int> s;
    s.insert(arr.begin(), arr.end());
    
    int total = 0;
    for(vector<int>::iterator it = arr.begin(); it!=arr.end(); it++)
        if(s.count(*it + k))
            total++;
    
    return total;
}

//solved with a set
int pairs(int k, vector <int> arr) {
    
    //sort the array
    sort(arr.begin(), arr.end());
    
    //print(arr);
    
    //initialize a set to avoid repeated pairs
    set< pair<int,int> > s; // implemented with a binary search tree
    
    for (int i=0; i<arr.size(); i++)
    {
        //check for numbers on the left of ith element
        for (int j = i-1; j>=0; j--)
        {
            int diff = arr[i]-arr[j];
            if (diff == k)
            {
                //cout << arr[i] << " " << arr[j] << endl;
                pair<int,int> p(arr[j],arr[i]);
                if (!s.count(p))
                    s.insert(p);
            }
            else if (diff > k)
                break;
        }
    
        //check for numbers on the right of ith element
        for (int j=i+1; j<arr.size(); j++)
        {
            int diff = arr[j]-arr[i];
            if (diff == k)
            {
                //cout << arr[i] << " " << arr[j] << endl;
                pair<int,int> p(arr[i],arr[j]);
                if (!s.count(p))
                    s.insert(p);
            }
            else if (diff > k)
                break;
        }
    }
    
    return s.size();
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = pairs2(k, arr);
    cout << result << endl;
    return 0;
}
