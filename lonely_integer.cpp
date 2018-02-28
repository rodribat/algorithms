#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

/* first approach - map*/
int lonely_integer_old(vector < int > a) {
    
    map<int, int> dict;
    
    vector<int>::iterator it;
    for (it = a.begin(); it !=a.end(); it++)
        dict[*it]++;
    
    map<int, int>::iterator mit;
    for (mit=dict.begin(); mit!=dict.end(); mit++)
        if (mit->second == 1)
            return mit->first;
    
    return -1;
}

/* second approach - bit operations */
int lonely_integer(vector < int > a) {
    
    int result = 0;
    vector<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        result ^= *it;
    
    return result;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    cout << lonely_integer(a) << endl;
    return 0;
}
