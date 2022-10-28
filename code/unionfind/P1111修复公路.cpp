#include <iostream>
#include <algorithm>
using namespace std;
const int N=100050;
int n,m,fa[1050];
struct node {
	int x,y,t;
	bool operator <(const node &a)const{
		return t<a.t;
	}
} ax[N];
int find(int x) {
	if(fa[x]==x)return x;
	else return fa[x]=find(fa[x]);
}
int main() {
	cin>>n>>m;
	for(int i=0,x,y,t; i<m; i++) {
		cin>>x>>y>>t;
		ax[i].x=x;
		ax[i].y=y;
		ax[i].t=t;
	}
	sort(ax,ax+m);
	for(int i=1;i<=n;i++)fa[i]=i;
	for(int i=0,k1,k2; i<m; i++) {
		k1=find(ax[i].x);
		k2=find(ax[i].y);
		if(k1!=k2){
			n--;
			fa[k1]=k2;
		}
		if(n==1){
			cout<<ax[i].t;system("pause");return 0;
		}
	}
	cout<<"-1";
	system("pause");
	return 0;
}