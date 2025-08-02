#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        long long c;
        cin >> n >> c;
        long long a[35];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        int coins = 0;
        long long mult = 1;
        bool used[35] = {0};

        for (int turn = 0; turn < n; turn++) {
            int pick = -1;
            for (int i = 0; i < n; i++) {
                if (!used[i] && a[i] * mult <= c) {
                    pick = i;
                }
            }
            if (pick != -1) {
                used[pick] = true;
            } else {
                for (int i = 0; i < n; i++) {
                    if (!used[i]) {
                        used[i] = true;
                        coins++;
                        break;
                    }
                }
            }
            mult *= 2;
        }

        cout << coins << '\n';
    }
    return 0;
}
