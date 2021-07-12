#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL long long

#define For(i, a, b) for( int i = (a); i < (b); i++ )
#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define Read(r) freopen(r, "r", stdin)
#define Write(w) freopen(w, "w", stdout)

using namespace std;

int n;
bool mat [100 + 3] [100 + 3];
bool vis [100 + 3];

void printLine ()
{
    printf ("+");
    for ( int i = 0; i < n * 2 - 1; i++ ) printf ("-");
    printf ("+\n");
}

void dfs (int at, int absent)
{
    if ( at == absent ) return;

    vis [at] = true;

    for ( int i = 0; i < n; i++ ) {
        if ( mat [at] [i] && !vis [i] ) dfs (i, absent);
    }

}

int main ()
{
    //Read ("in.in");
    //Write ("out.txt");
    int testCase; scanf ("%d", &testCase);
    int cases = 0;

    while ( testCase-- ) {
        scanf ("%d", &n);

        Set (mat, false);

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                int a; scanf ("%d", &a);
                mat [i] [j] = a;
            }
        }
        dfs(0,1);
        for(int i =0;i<n;i++)
        {
            cout<<vis[i]<<endl;
        }
    return 0;
}
}
