#include<iostream>
using namespace std;
#define N 35

int main()
{
    int a[N][N];
    int n, i, j;
    cin >> n;
    for (i = 1;i <= n;i++)
    {
        for (j = 1;j <= i;j++)//使用i来约束j的数值
        {
            if (i == j || j == 1)//每行行首或行尾均为1
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            cout << "";
            printf("%d ",a[i][j]);
        }
        cout << endl;
    }
    return 0;
}
