#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int INF=2147483647;
struct node{
	int value;
	int dis;//储存这个点到源点的最短距离 
	bool visit;//存储这个点的距离是否已经被确定为最短距离 
	vector<int> to;//储存这个元素所连接的所有元素 
}a[101];
int c,n=0;
void dijkstra(int x){
	int q[101],head=0,tail=0;//存储已经确定最短路的点,这里选择手打队列 
	int minn,now; 
	a[x].dis=0;
	a[x].visit=true;
	q[tail++]=x;//不要搞混++i和i++的区别 
	for(int i=1;i<n;i++){
		minn=INF;
		for(int j=head;j<tail;j++)
		for(vector<int>::iterator it=a[q[j]].to.begin();it<a[q[j]].to.end();it++){
			if(a[q[j]].dis+1<minn&&!a[*it].visit){
				minn=a[q[j]].dis+1;
				now=*it;
			} 
		}//循环遍历求当前所能到达的距离最近的点 
		q[tail++]=now;
		a[now].visit=true;
		a[now].dis=minn; 
	}
	return; 
}
int cmp(node x,node y){
	return x.dis<y.dis;
}
int main(){
	while(1){
		cin>>c;
		if(c==0) break;
		n++;
		a[n].value=c;
		a[n].to.push_back(n-1);
		a[n-1].to.push_back(n);//因为是无向边所以边连接的两个元素都要建边 
	}
	dijkstra(n);//以n作为源点求最短路 
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<a[i].value<<" ";
	}
	return 0;
} 
