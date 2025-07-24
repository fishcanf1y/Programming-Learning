#include <stdio.h>
int main(){
    int max=0,min=10000,num,temp;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&temp);
        if(temp>max) max=temp;
        if(temp<min) min=temp;
    }
    printf("%d",max-min);
    return 0;
}