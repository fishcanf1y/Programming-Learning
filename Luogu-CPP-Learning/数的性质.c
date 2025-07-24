#include <stdio.h>
#include <math.h>

int judge(int num){
    if(num%2==0){
        if(num>4&&num<=12){
            return 4;
        }
        return 3;
    }
    else if(num>4&&num<=12){
        return 3;
    }
    return 2;
}

int main(void){
    int a=0,choice;
    scanf("%d",&a);
    choice=judge(a);
    switch(choice){
        case 4:printf("1 1 0 0"); break;
        case 3:printf("0 1 1 0"); break;
        default:
            printf("0 0 0 1");
    }
    return 0;
}