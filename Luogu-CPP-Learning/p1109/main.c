#include<stdio.h>
int main()
{
    int i,A[1005]={0},B[1005]={0},n,j;
    scanf("%d", &n);
    A[0]=B[0]=1;
    for (i=2;i<=n;i++){
        for (j=0;j<100;j++)
            B[j]*=i;
        for (j=0;j<100;j++)
            if (B[j]>9){
                B[j+1] += B[j]/10;
                B[j]%=10;
            }
        for (j=0;j<100;j++){
            A[j]+=B[j];
            if (A[j]>9) {
                A[j+1] += A[j]/10;
                A[j]%=10;
            }
        }
    }
    for (i=100;i>=0&&A[i]==0;i--);
    for (j=i;j>=0;j--) printf("%d", A[j]);
    return 0;
}
