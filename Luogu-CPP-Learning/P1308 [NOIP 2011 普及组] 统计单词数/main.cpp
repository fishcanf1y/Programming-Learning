#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string to_lower(const string &str) {
    string result = str;
    for (char &c : result) {
        c = tolower(c);
    }
    return result;
}
string read_and_format_input() {
    string temp;
    getline(cin, temp);
    return ' ' + to_lower(temp) + ' '; // 添加空格确保单词边界匹配
}
int main() {
    string passage, target;
    target = read_and_format_input();
    passage = read_and_format_input();
    int first_pos = -1;
    int count = 0;
    size_t pos = 0;
    while (true) {
        pos = passage.find(target, pos);
        if (pos == string::npos) {
            break;
        }
        if (count == 0) {
            first_pos = pos; // 记录第一次出现的位置
        }
        count++;
        pos += 1; // 移动到下一个字符继续搜索
    }
    if (count == 0) {
        cout << -1 << endl;
    }
    else {
        cout << count << ' ' << first_pos << endl;
    }
    return 0;
}
