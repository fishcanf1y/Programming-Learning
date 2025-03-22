#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d,e,f,g,h,i,s1,s2; 
    char j;
    scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    s1=(a*1+b*2+c*3+d*4+e*5+f*6+g*7+h*8+i*9)%11;
    if(j=='X')
        s2=10;
    else
        s2=j-'0';
        
    if(s1==s2)
        printf("Right\n");
    else if(s1==10)
        printf("%d-%d%d%d-%d%d%d%d%d-X", a, b, c, d, e, f, g, h, i);
    else
        printf("%d-%d%d%d-%d%d%d%d%d-%d", a, b, c, d, e, f, g, h, i, s1);
    return 0;
}
