#include <iostream>
using namespace std;

int main(){
	int years;
	cin>>years;
	if((years%400==0) || (years%4==0 && years%100!=0)){
		cout<<"yes";
	}
	else
		cout<<"no";
	return 0;
}
