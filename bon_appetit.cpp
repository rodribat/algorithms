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

int calculate(vector<int> prices, int k)
{
    int actual = 0;
    for (int i=0; i<prices.size(); i++)
        if (i!=k)
            actual += prices[i];
    
    return actual/2;
}

int main() {
    
    int n;
    cin >> n;
    
    int k;
    cin >> k;
    
    vector<int> prices(n);
    for (int i=0; i<n; i++)
        cin >> prices[i];
    
    int charged;
    cin >> charged;
    
    int actual = calculate(prices, k);
    
    if (actual == charged)
        cout << "Bon Appetit" << endl;
    else
        cout << charged - actual << endl;
    
    return 0;
}
