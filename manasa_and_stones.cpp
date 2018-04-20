#include <bits/stdc++.h>

using namespace std;

vector <int> stonesPD(int n, int a, int b) {

    int lines = pow(2, n-1);
    int cols = n-1;
    
    //fill the matrix
    int m[cols][lines];
    for (int i=0; i<cols; i++)
    {
        int times_to_repeat = 1;
        int used_times = 0;
        bool use_a = true;
        for (int j=0; j<lines; j++)
        {
            if (use_a)
                m[i][j] = a;
            else
                m[i][j] = b;
            
            used_times++;
            
            if (used_times == times_to_repeat)
            {
                use_a = !use_a;
                used_times = 0;
            }
        }
        
        times_to_repeat *= 2;
    }
    
    set<int> s;
    for (int j=0; j<lines; j++)
    {
        int sum = 0;
        for (int i=0; i<cols; i++)
        {
            cout << m[i][j] << " ";
            sum += m[i][j];
        }
        cout << sum << endl;
        
        s.insert(sum);
    }
    
    vector<int> ret(s.begin(), s.end());
    return ret;
}

void stonesRec(int n, int a, int b, int curr, set<int>& s)
{
    if (n==1)
    {
        s.insert(curr);
        return;
    }
    
    stonesRec(n-1, a, b, curr+a, s);
    stonesRec(n-1, a, b, curr+b, s);

    return;
}

vector <int> stones(int n, int a, int b) {

    set<int> s;
    stonesRec(n, a, b, 0, s);
    
    vector<int> ret(s.begin(), s.end());
    return ret;
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        int a;
        cin >> a;
        int b;
        cin >> b;
        vector <int> result = stonesPD(n, a, b);
        for (ssize_t i = 0; i < result.size(); i++) {
            cout << result[i] << (i != result.size() - 1 ? " " : "");
        }
        cout << endl;


    }
    return 0;
}
