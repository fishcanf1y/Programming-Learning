#include <bits/stdc++.h>
using namespace std;
int n,sum,cnt,ct,ans;

int main() {
    cin>>n;
    sum=n*n;
    while(ans<sum) {
        cin>>ct;
        for(int i=0;i<ct;i++) {
            cout<<cnt;
            ans++;
            if(ans%n==0) cout<<endl;
        }
        cnt=1-cnt;
    } 
    return 0;
}

