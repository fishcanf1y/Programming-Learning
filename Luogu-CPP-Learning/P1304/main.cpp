#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int max_num) {
    vector<bool> is_prime(max_num + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= max_num; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_num; j += i) {
                is_prime[j] = false;
            }
        }
    }     
    return is_prime;
}

int main() {
    int N;
    cin >> N;
    vector<bool> is_prime = sieve(N);

    for (int m = 4; m <= N; m += 2) {
        for (int a = 2; a <= m / 2; ++a) {
            int b = m - a;
            if (is_prime[a] && is_prime[b]) {
                cout << m << "=" << a << "+" << b << endl;
                break;
            }
        }
    }

    return 0;
}
