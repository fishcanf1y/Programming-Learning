// L: Length of the bridge
// N: Number of the soldier at first

#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 5005;  
int a[MAX_SIZE];

int main() {
    int L, N;
    scanf("%d%d", &L, &N);

    if (N == 0) {
        printf("0 0\n");
        return 0;
    }
    if (N > MAX_SIZE) {  
        return -1;
    }
    if (L == 0) {  
        printf("0 0\n");
        return 0;
    }

    for (int i = 0; i < N; i++) {  
        scanf("%d", &a[i]);
    }
    sort(a, a + N);  

    int min_time = 0;
    int max_time = max(L + 1 - a[0], a[N - 1]);  

    for (int i = 0; i < N; i++) {
        int current_min = min(a[i], L + 1 - a[i]);
        min_time = max(current_min, min_time);
    }

    printf("%d %d\n", min_time, max_time);
    return 0;
}