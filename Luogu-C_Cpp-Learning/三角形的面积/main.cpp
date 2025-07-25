#include <iostream>
#include <cmath>
using namespace std;
double a,b,c;
double ans;
int main(){
    std::cin>>a>>b>>c;
    double p = 0.5*(a+b+c);
    double ans= sqrt(p*(p-a)*(p-b)*(p-c));
    std::cout<<ans<<endl;
    return 0;
}
