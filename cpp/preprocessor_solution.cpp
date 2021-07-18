// https://www.hackerrank.com/challenges/preprocessor-solution/problem

#define INF 100000000
#define toStr(s) #s
#define io(v) cin>>v
#define i n
#define foreach(v,i) for(int i=0;i<v.size();i++)
#define FUNCTION(name,op) void name(int& a, int b) { if (b op a) a = b; }
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
    int n; cin >> n;
    vector<int> v(n);
    foreach(v, i) {
        io(v)[i];
    }

    int mn = INF;
    int mx = -INF;
    foreach(v, i) {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) <<' '<< ans;
    return 0;

}