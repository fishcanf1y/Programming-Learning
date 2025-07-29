#include <iostream>
#include <cstdio>
#include <cstring>
#define ll long long
using namespace std;

ll memo[21][21][21];
ll w(ll a, ll b, ll c) {
    if(a<=0 || b<=0 || c<=0) return 1;
    if(a>20 || b>20 || c>20) return w(20,20,20);
    if (memo[a][b][c] != -1) {
        return memo[a][b][c];
    }
    if (a<b && b<c) {
        memo[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c);
    } else {
        memo[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
    }
    return memo[a][b][c];
}

int main() {
    memset(memo, -1, sizeof(memo));
    ll a,b,c;
    while(cin>>a>>b>>c) {
        if(a==-1 && b==-1 &&c==-1) break;
        ll ans = w(a,b,c);
        cout << "w(" << a << ", " << b << ", " << c << ") = " << ans << endl;
    }
    return 0;
}