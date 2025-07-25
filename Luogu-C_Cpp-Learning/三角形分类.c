#include <stdio.h>
#include <math.h>
int a,b,c,a1,b1,c1;
void sorting(){
    if(a>=b&&a>=c){
        a1=a;
        if(b>=c){
            b1=b;
            c1=c;
        }
        else{
            b1=c;
            c1=b;
        }
    }
    if(c>=b&&c>=a){
        a1=c;
        if(b>=a){
            b1=b;
            c1=b;
        }
        else{
            b1=a;
            c1=a;
        }
    }
}
int main(){
    scanf("%d %d %d",&a,&b,&c);
    sorting(a,b,c,a1,b1,c1);
    if(c1+b1<a1||c1==0){
        printf("Not triangle");
    }
    else{
        if((c1*c1+b1*b1)==a1*a1){
            printf("Right triangle\n");
        }
        else if((c1*c1+b1*b1)<a1*a1){
            printf("Obtuse triangle\n");
        }
        else{
            printf("Acute triangle\n");
        }
        if(c1==b1||b1==a1){
            printf("Isosceles triangle\n");
        }
        if(c1==b1&&b1==a1){
            printf("Equ;ateral triangle\n");
        }
    }
    return 0;
}