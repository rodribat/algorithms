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

int number_needed(string a, string b) {
    
    std::unordered_map<char, int> dict;
    
    for (int i=0; i<a.length(); i++)
        dict[a[i]]++;
    
    for (int i=0; i<b.length(); i++)
        dict[b[i]]--;
    
    std::unordered_map<char, int>::iterator it = dict.begin();
    int number = 0;
    while(it != dict.end())
    {
        number += abs(it->second);
        it++;
    }
    
    return number;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
