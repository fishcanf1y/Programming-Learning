// 直接暴力枚举

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int m,n,z,c,i,j,k,l;
int main() {
    cin >> m >> n;
    for(i=0; i<=m; i++)
    for(j=0; j<=n; j++)
    for(k=i+1; k<=m; k++)
    for(l=j+1; l<=n; l++)
    if(k-i==l-j) z++;
    else c++;
    cout << z << " " << c;
    return 0;
}