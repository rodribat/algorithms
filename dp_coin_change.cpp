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

long long make_change(vector<int> coins, int coins_in_use, int money, vector< vector<long long> > &memo) {
    if (money == 0)
        return 1;
    
    if (money < 0)
        return 0;
    
    if (coins_in_use == 0)
        return 0;
    
    //explore solutions that does not have the last coin + solutions that use one unity of last coin
    if (memo[coins_in_use][money] == 0)
    {
        memo[coins_in_use][money] = make_change(coins, coins_in_use-1, money, memo) + make_change(coins, coins_in_use, money-coins[coins_in_use-1], memo);
    }
    
    return memo[coins_in_use][money];
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> coins(m);
    for(int coins_i = 0;coins_i < m;coins_i++){
       cin >> coins[coins_i];
    }
    
    //Initialize a m by n maxtrix with default 0
    vector< vector<long long> > memo(m+1, vector<long long>(n+1, 0));
    
    cout << make_change(coins, coins.size(), n, memo) << endl;
    return 0;
}
