#include <stdio.h>

int main(void){
    double m,h,BMI;
    scanf("%lf %lf",&m,&h);
    BMI=m/(h*h);
    if(BMI<18.5) printf("Underweight");
    else if(BMI>=18.5&&BMI<24) printf("Normal");
    else{
        printf("%.6g\n",BMI);
        printf("Overweight");
    }
    return 0;
}