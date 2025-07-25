#include <stdio.h>

int judge(int a){
    if(a==1||a==3||a==5||a==7||a==8|a==10||a==12) printf("31");
    else printf("30");
}

int judge_run(int num){
    if(num%4==0){
        if(num%400==0) return 1;
        else if(num%100==0) return 0;
        return 1;
    }
    return 0;
}

int main(void){
    int year,month,day;
    scanf("%d %d",&year,&month);
    if(month==2){
        if(judge_run(year)){
            printf("29");
        }
        else printf("28");
        return 0;
    }
    judge(month);
    return 0;
}