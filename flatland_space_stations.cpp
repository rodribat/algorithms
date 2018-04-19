#include <bits/stdc++.h>

using namespace std;

int flatlandSpaceStations(int n, vector <int> c) {
    
    sort(c.begin(), c.end());
    
    int max_dist = 0;
    
	//test_between space stations
    for (int i=1;i<c.size(); i++)
    {
        int dist = (c[i]-c[i-1])/2; //check mid point between stations
        max_dist = max(dist, max_dist);
    }
	
	//check distance from cities before first station and after last station
    max_dist = max(c[0], max_dist);
    max_dist = max(n-*c.rbegin()-1, max_dist);
    
    return max_dist;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    int result = flatlandSpaceStations(n, c);
    cout << result << endl;
    return 0;
}
