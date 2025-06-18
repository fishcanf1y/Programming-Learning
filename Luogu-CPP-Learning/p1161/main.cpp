#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    bool lights[2000001] = {0};
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double a;
        cin >> a;
        
        int t;
        cin >> t;

        for (int j = 1; j <= t; j++)
        {
            lights[(int) floor(a * j)] = !lights[(int) floor(a * j)];
        }
    }

    for (int i = 1; i <= 2000000; i++)
    {
        if (lights[i] == true) {
            cout << i << endl;
            return 0;
        }
    }
}
