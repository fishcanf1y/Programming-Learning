#include<bits/stdc++.h>
using namespace std;
int a,n[11];
int ans; // 存储答案

void print_ans(){ // 输出10个配料的克数的函数
    for(int i=1;i<=10;++i){
        printf("%d",a[i]);
    }
    printf("\n");
    return;
}

void print_method(int cnt, int step){ // 打印方案的函数，cnt表示当前美味程度，step表示放了几种配料
    if(cnt<0) return; // 如果美味程度为负数直接停止
    if(step==10&&cnt!=0) return; //如果放完配料后cnt还有剩余也停止
    if(step==10&&cnt==0){ // 若放完配料后cnt无剩余直接输出配料方案
        print_ans();
        return;
    }
    for(int i=1;i<=3;i++){
        a[step+1]=i; // 枚举出下一次配料加多少克
        print_method(cnt-i, step+1); // 搜索开始
    }
}

void count_ans(int cnt, int step){ // 计算答案函数
    if(cnt<0) return;
    if(step==10&&cnt!=0) return;
    if(step==10&&cnt==0){
        ans++;
        return;
    }
    for(int i=1;i<=3;++i){
        a[step+1]=i;
        count_ans(cnt-i, step+1);
    }
}

int main(){
    scanf("%d",&n);
    if(n>30){ // cnt最大值为3，十个值加起来就是30
        printf("0");
        return 0;
    }
    count_ans(n,0); // 统计答案数
    printf("%d\n", ans);
    print_method(n,0);
    return 0;
}
