#include <iostream>
#include <cstdio>
using namespace std;
const int N=200,M=1e4;
int a[N];
bool f[M];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=N;i++){
        scanf("%d",&a[i]);
        f[a[i]]=true;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            if(f[a[i]+a[j]]){
                ans++;
                f[a[i]+a[j]]=false;
            }
    printf("%d",ans);
    return 0;
}

