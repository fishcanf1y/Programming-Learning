#include <iostream>
#include <string>
using namespace std;

// 反转字符串
string reverseString(string s) {
    string reversed;
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }
    return reversed;
}

// 去除前导零
string removeLeadingZeros(string s) {
    int i = 0;
    while (i < s.length() && s[i] == '0') {
        i++;
    }
    if (i == s.length()) {
        return "0";
    }
    return s.substr(i);
}

// 去除末尾零
string removeTrailingZeros(string s) {
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '0') {
        i--;
    }
    if (i == -1) {
        return "0";
    }
    return s.substr(0, i + 1);
}

int main() {
    string s;
    cin >> s;
    
    if (s.find('.') != string::npos) {
        // 处理小数
        int dotPos = s.find('.');
        string integerPart = s.substr(0, dotPos);
        string decimalPart = s.substr(dotPos + 1);
        
        string reversedInteger = removeLeadingZeros(reverseString(integerPart));
        string reversedDecimal = removeTrailingZeros(reverseString(decimalPart));
        
        cout << reversedInteger << "." << reversedDecimal << endl;
    } else if (s.find('/') != string::npos) {
        // 处理分数
        int slashPos = s.find('/');
        string numerator = s.substr(0, slashPos);
        string denominator = s.substr(slashPos + 1);
        
        string reversedNumerator = removeLeadingZeros(reverseString(numerator));
        string reversedDenominator = removeLeadingZeros(reverseString(denominator));
        
        cout << reversedNumerator << "/" << reversedDenominator << endl;
    } else if (s.find('%') != string::npos) {
        // 处理百分数
        string numberPart = s.substr(0, s.length() - 1);
        string reversedNumber = removeLeadingZeros(reverseString(numberPart));
        
        cout << reversedNumber << "%" << endl;
    } else {
        // 处理整数
        string reversedNumber = removeLeadingZeros(reverseString(s));
        cout << reversedNumber << endl;
    }
    
    return 0;
}
