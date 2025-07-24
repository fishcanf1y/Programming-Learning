#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 32; i++) {
        for (int j = 4; j >= 0; j--) {
            int bit = (i >> j) & 1; 
            cout << bit;
        }
        cout << endl;
    }
    return 0;
}
