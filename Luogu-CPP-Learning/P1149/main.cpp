#include <bits/stdc++.h>
using namespace std;
int a[]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, n, ans;
int f (int x) {
	if (x<10)
		return a[x];
	return f(x/10)+a[x%10];
}
int main () {
	cin >> n;
	for (int i=0; i<=1000; ++i)
		for (int j=0; j<=1000; ++j)
			ans+=(f(i)+f(j)+f(i+j)==n-4);
	cout << ans;
	return 0;
}