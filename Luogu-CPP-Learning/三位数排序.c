#include <stdio.h>

int main(void){
    int m,h,n;
    scanf("%d %d %d",&m,&h,&n);
    if (m>=h&&m>=n&&h>=n){
        printf("%d %d %d",n,h,m);
    }
    else if (m>=h&&m>=n&&n>=h){
        printf("%d %d %d",h,n,m);
    }
    else if (h>=m&&m>=n&&h>=n){
        printf("%d %d %d",n,m,h);
    }
    else if (n>=m&&m>h&&n>=h){
        printf("%d %d %d",h,m,n);
    }
    else if (h>=m&&n>m&&n>=h){
        printf("%d %d %d",m,h,n);
    }
    else{
        printf("%d %d %d",m,n,h);
    }
    return 0;
}



