#include <iostream>
using namespace std;

int fibMod(int n) {
    const int MOD = 10007;
    if (n == 0) return 0;
    if (n == 1) return 1;
  
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = (a + b) % MOD;  // 每一步计算都取模防止溢出
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    cout << fibMod(n)%10007 << endl;
    //cout<<ans;
    return 0;
}
