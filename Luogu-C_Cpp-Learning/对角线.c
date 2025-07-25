#include <stdio.h>
int main(void){
    unsigned long long a=0,b=0;
    scanf("%lld",&a);
    b=a*(a-1)/2*(a-2)/3*(a-3)/4;
    printf("%lld",b);
    return 0;
}