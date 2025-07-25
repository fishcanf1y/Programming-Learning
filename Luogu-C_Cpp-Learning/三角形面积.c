#include <stdio.h>
#include <math.h>

double cacu(double a,double b,double c){
    double p=0;
    p=0.5*(a+b+c);
    return (sqrt(p*(p-a)*(p-b)*(p-c)));
}
int main(void){
    double a=0,b=0,c=0,S=0;
    scanf("%lf %lf %lf",&a,&b,&c);
    S=cacu(a,b,c);
    printf("%.1lf",S);
    return 0;
}

// gcc 三角形面积.c -lm -o 三角形面积