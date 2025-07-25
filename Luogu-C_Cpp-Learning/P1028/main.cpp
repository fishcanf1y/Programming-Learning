#include <iostream>
using namespace std;
int n;
int f[1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i/2;j++){
			f[i]+=f[j];
		}
		f[i]++;
	}
	cout<<f[n];
	return 0;
}
