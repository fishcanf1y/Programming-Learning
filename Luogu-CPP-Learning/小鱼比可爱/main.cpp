#include <iostream>
using namespace std;
int a[101],b[101],n;
int main(){
    std::cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=i;j>=1;j--){
            if(a[j]<a[i])
            b[i]++;
        }
    for(int i=1;i<=n;i++) 
        cout<<b[i]<<" ";
    return 0;
}
