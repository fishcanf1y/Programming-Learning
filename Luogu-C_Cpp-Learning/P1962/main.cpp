#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#define reg register
#define N 200003
#define inf 0x3f3f3f3f
#define int long long
#define p 1000000007
#define inv2 500000004
using namespace std;

struct complex{ //我们自定义的复数,表示为a+b*sqrt(5)
    int a,b;
    complex(int a=0,int b=0):a(a),b(b){}

    complex operator + (const complex& x) const{
        complex res;
        res.a = (a+x.a)%p;
        res.b = (b+x.b)%p;
        return res;
    }
    complex operator - (const complex& x) const{
        complex res;
        res.a = (a-x.a+p)%p;
        res.b = (b-x.b+p)%p;
        return res;
    }
    complex operator * (const complex& x) const{
        complex res;
        res.a = (a*x.a+5*b*x.b)%p;
        res.b = (a*x.b+x.a*b)%p;
        return res;
    }
};

inline complex power(complex a,int t){
    complex res = complex(1,0); //直接快速幂
    while(t){
        if(t&1) res = res*a;
        a = a*a;
        t >>= 1;
    }
    return res;
}

int n,ans;
complex x,y,res;

signed main(){
    scanf("%lld",&n);
    x = complex(inv2,inv2);
    y = complex(inv2,p-inv2);
    x = power(x,n);
    y = power(y,n);
    res = x-y;
    ans = res.b;
    printf("%lld",ans);
    return 0;
}