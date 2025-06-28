#include <iostream>
#include <string>
using namespace std;

int nu[10521];
int main(void) {
    int n, i, p, ans = -1;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&p);
        if(i&&p == nu[i-1]) {
            i--;
            n--;
            continue;
        }
        nu[i] = p;
    }
    for(i=1; i<n-1; i++)
        if(nu[i-1] < nu[i] && nu[i] > nu[i+1]) ans++;
    printf("%d\n",ans);
    return 0;
}
