#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=20050,maxm=100050;
int N,M,father[2*maxn],enemy[2*maxn];
struct node {
	int a,b,c;
	bool operator <(const node &x)const {
		return c>x.c;
	}
} ax[maxm];
int find(int x) {
	if(father[x]==x)return x;
	else return father[x]=find(father[x]);
}
int solve() {
	for(int i=0,k1,k2,k3,k4; i<M; i++) {
		k1=find(ax[i].a);
		k2=find(ax[i].b);
		if(k1==k2) return ax[i].c;
		k3=find(enemy[k1]);
		k4=find(enemy[k2]);
		father[k3]=k2;
		father[k4]=k1;
	}
	return 0;
}
int main() {
	cin>>N>>M;
	for(int i=1;i<=2*N;i++)father[i]=i;
	for(int i=1;i<=N;i++)enemy[i]=i+N,enemy[i+N]=i;
	for(int i=0; i<M; i++) {
		int a,b,c;
		cin>>a>>b>>c;
		ax[i].a=a;
		ax[i].b=b;
		ax[i].c=c;
	}
	sort(ax,ax+M);
	cout<<solve();
	return 0;
}
