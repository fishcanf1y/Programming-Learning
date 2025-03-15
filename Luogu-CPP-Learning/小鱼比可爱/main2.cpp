#include <iostream>
using namespace std;

int main(){
    int n; // 小鱼的数目
    std::cin>>n; // 输入鱼的数量

    int a[100]; // 存储每一只鱼的可爱程度，假设最多100只鱼
    for (int i=0;i<n;i++){
        std::cin>>a[i]; // 输入每只鱼的可爱程度
    }
    int result[100]={0}; // 存储每只鱼的结果，初始化为0
    // 遍历每只鱼
    for (int i=0;i<n;i++){
        // 遍历当前鱼左边的所有鱼
        for(int j=0;j<i;j++){
            if (a[j]<a[i]){ // 如果左边的鱼比当前鱼的可爱程度低
                result[i]++; // 计数器加一
            }
        }
    }

    // 输出结果
    for(int i=0;i<n;i++){
        std::cout<<result[i]<<" ";
    }
    std::cout<<endl;
    return 0;
}
