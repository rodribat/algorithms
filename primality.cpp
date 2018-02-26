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

bool is_prime(long n)
{
    if (n==1)
        return false;
    
    if (n==2)
        return true;
    
    double limit = sqrt(n); //optimization to test just divisors between 2 and sqrt(n)
    
    for (int i=2; i<=ceil(limit); i++)
        if (n % i == 0)
            return false;
    
    return true;
}

int main(){
    int p;
    cin >> p;
    for(int a0 = 0; a0 < p; a0++){
        int n;
        cin >> n;
        
        if (is_prime(n))
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;
    }
        
    return 0;
}
