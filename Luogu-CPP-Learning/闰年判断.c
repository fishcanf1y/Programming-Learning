#include <stdio.h>
#include <math.h>

int judge(int num){
    if(num%4==0){
        if(num%400==0) return 1;
    }
    else if(num%100==0) return 0;
    else return 1;
    return 0;
}

int main(void){
    int a=0,choice;
    scanf("%d",&a);
    choice=judge(a);
    printf("%d",choice);
    return 0;
}