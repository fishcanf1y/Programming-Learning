#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    int sum = 0;
    
    // 使用传统迭代器遍历 vector
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        int num = *it;
        if (num > max_val) max_val = num;
        if (num < min_val) min_val = num;
        sum += num;
    }
    
    cout << max_val << endl;
    cout << min_val << endl;
    cout << sum << endl;
    
    return 0;
}
