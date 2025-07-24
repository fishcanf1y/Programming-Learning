#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 反转字符串并去除前导零
string reverseStr(const string &s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    // 去除前导零
    size_t nonZero = reversed.find_first_not_of('0');
    if (nonZero == string::npos) { // 全为零
        return "0";
    }
    return reversed.substr(nonZero);
}

// 处理小数部分的反转并去除末尾零
string reverseDecimal(const string &s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    // 去除末尾零
    size_t lastNonZero = reversed.find_last_not_of('0');
    if (lastNonZero == string::npos) { // 全为零
        return "0";
    }
    return reversed.substr(0, lastNonZero + 1);
}

string reverseNumber(const string &s) {
    if (s.find('.') != string::npos) {
        // 处理小数
        size_t dotPos = s.find('.');
        string integerPart = s.substr(0, dotPos);
        string decimalPart = s.substr(dotPos + 1);
        string reversedInteger = reverseStr(integerPart);
        string reversedDecimal = reverseDecimal(decimalPart);
        return reversedInteger + "." + reversedDecimal;
    } else if (s.find('/') != string::npos) {
        // 处理分数
        size_t slashPos = s.find('/');
        string numerator = s.substr(0, slashPos);
        string denominator = s.substr(slashPos + 1);
        string reversedNumerator = reverseStr(numerator);
        string reversedDenominator = reverseStr(denominator);
        return reversedNumerator + "/" + reversedDenominator;
    } else if (s.find('%') != string::npos) {
        // 处理百分数
        string numberPart = s.substr(0, s.size() - 1);
        string reversedNumber = reverseStr(numberPart);
        return reversedNumber + "%";
    } else {
        // 处理整数
        return reverseStr(s);
    }
}

int main() {
    string s;
    cin >> s;
    cout << reverseNumber(s) << endl;
    return 0;
}