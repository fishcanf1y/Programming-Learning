#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    int productA = 1, productB = 1;
    
    for(char c : a) {
        if(!isupper(c)) {
            cerr << "Invalid input: " << c << endl;
            return 1;
        }
        productA = (productA * (c - '@')) % 47;
    }
    
    for(char c : b) {
        if(!isupper(c)) {
            cerr << "Invalid input: " << c << endl;
            return 1;
        }
        productB = (productB * (c - '@')) % 47;
    }
    
    cout << (productA == productB ? "GO" : "STAY") << endl;
    return 0;
}
