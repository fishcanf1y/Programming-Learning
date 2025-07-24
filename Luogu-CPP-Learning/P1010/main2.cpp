#include<iostream>
using namespace std;

void solve(int a) {
    if(a == 0) { cout << "0"; return; }
    
    bool first = true;
    for(int i = 30; i >= 0; i--) {
        if(a & (1 << i)) {
            if(!first) cout << "+";
            first = false;
            
            if(i == 0) cout << "2(0)";
            else if(i == 1) cout << "2";
            else {
                cout << "2(";
                solve(i);
                cout << ")";
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}