#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
    #include "E:/algo/debug.h"
#else
    #define dbg(...) 1
    #define cerr if(0) cerr
#endif

#define ll long long int
#define endl "\n"

void solve(int &tc)
{
       
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifdef LOCAL
        freopen("E:/algo/io/input.txt", "r", stdin);
        freopen("E:/algo/io/output.txt", "w", stdout);
        freopen("E:/algo/io/debug.txt", "w", stderr);
    #endif

    int rep = 1;
    while(rep--) {
        int tc = 1;
        for(int i = 1; i <= tc; i++) {
            cerr << "Case #" << i << endl;
            solve(i);
        }
        if(dbg()) break;
    }
    return 0;
}