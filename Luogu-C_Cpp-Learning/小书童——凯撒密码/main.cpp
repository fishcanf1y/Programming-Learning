#include<bits/stdc++.h>
using namespace std;
int main() 
{
	char a[10001];
	long long s[10001];
	long long lengthen,n,i;
	cin>>n;
	cin>>a;
	lengthen=strlen(a);
	for(i=0;i<lengthen;i++){ 
	s[i]=a[i];
	}
	for(i=0;i<lengthen;i++){
		s[i]=s[i]+n;
		if(s[i]>'z') s[i]='a'+(s[i]% 'z')-1;
	}
	for(i=0;i<lengthen; i++){
	a[i]=s[i]; 
	cout<<a[i];
	}
	return 0;
}
