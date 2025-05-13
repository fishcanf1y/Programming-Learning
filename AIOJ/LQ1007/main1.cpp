#include <iostream>
#include <bitset>
using namespace std;

int main() {
    for (int i = 0; i < 32; i++) {
        bitset<5> binary(i);
        cout << binary << endl;
    }
    return 0;
}
