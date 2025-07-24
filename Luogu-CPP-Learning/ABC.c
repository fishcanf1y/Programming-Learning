#include <stdio.h>
#include <math.h>
int a,b,c,a1,b1,c1;
void sorting(){
    if(a>=b&&a>=c){
        a1=a;
        if(b>=c){
            b1=b;
            c1=c;
        } else{
            b1=c;
            c1=b;
        }
    }
    if(b>=a&&b>=c){
        a1=b;
        if(a>=c){
            b1=a;
            c1=c;
        } else{
            b1=c;
            c1=a;
        }
    }
    if(c>=b&&c>=a){
        a1=c;
        if(b>=a){
            b1=b;
            c1=a;
        } else{
            b1=a;
            c1=b;
        }
    }
}
int main(void){
char n,m,l;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%c %c %c",&m,&n,&l);
    sorting();
    if(m=='A'){
        printf("%d ",c1);
    } else if(m=='B'){
        printf("%d ",b1);
    } else{
        printf("%d ",a1);
    }

    if(n=='A'){
        printf("%d ",c1);
    } else if(n=='B'){
        printf("%d ",b1);
    } else{
        printf("%d ",a1);
    }

    if(l=='A'){
        printf("%d ",c1);
    } else if(l=='B'){
        printf("%d ",b1);
    } else{
        printf("%d ",a1);
    }
    return 0;
}
