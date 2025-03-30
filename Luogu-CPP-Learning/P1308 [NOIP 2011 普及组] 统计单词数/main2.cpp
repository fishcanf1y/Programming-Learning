#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string lowwers (string str) {
    int len=str.size();
    for (int i=0;i<len;i++) {
        str[i]=(str[i]>=65&&str[i]<=90)?str[i]+32:str[i];
    }
    return str;
}
string inputs() {
    string temp;
    getline(cin,temp);
    return ' '+lowwers(temp)+' ';
}
int main() {
    string pas,goal;
    int pos=0,count=0,memory;
    goal=inputs();
    pas=inputs();
    pos=pas.find(goal,pos);
    if(pos==-1) {
        std::cout<<pos;
        return 0;
    }
    else {
        memory=pos;count++;
        pos+=goal.size()-1;
    }
    while (pos<pas.size()) {
        pos=pas.find(goal,pos);
        if (pos==-1) {
            break;
        }
        else {
            count++;
            pos=pos+goal.size()-1;
        }
    }
    std::cout<<count<<' '<<memory;
    return 0;
}
