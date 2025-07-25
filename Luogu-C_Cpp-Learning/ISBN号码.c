#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char s[100];
    int num[100];
    int all=0;
    int len;
    scanf("%s",&s);
    len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]=='-')
            for(int j=0;j<len-i;j++){
                s[i+j]=s[i+j+1];
            }
    }
    len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]=='X'){
            num[i]=10;
            continue;
        }
        char m=s[i];
        num[i]=atoi(&m);
    }
    for(int i=0;i<len-1;i++){
        all+=(i+1)*num[i];
    }
    if(all%11==num[len-1])
        printf("right");
    else{
        for(int i=0;i<len-1;i++){
            printf("%d",num[i]);
            if(i==0||i==3||i==8){
                printf("-");
            }
        }
        if(all%11==10){
            printf("X");
        }
        else{
            printf("%d",all%11);
        }
    }
    return 0;
}