#include <stdio.h>
int main(void){
    int a=0,local,luogu;
    scanf("%d",&a);
    local=a*5;
    luogu=11+3*a;
    if(local<=luogu) printf("Local");
    else printf("Luogu");
    return 0;
}