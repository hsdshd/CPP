#include <iostream>
#include <cstring>
using namespace std;
const int N=20;
int n,x,y,a;
int dt[N][N],f[2*N][N][N];//f[k][x1][x2]到第k斜排，分别位于x1,x2时的最优解 
int main() {
	cin>>n;
	while(cin>>x>>y>>a) {
		if(x==0&&y==0&&a==0)break;
		dt[x][y]=a;
	}
	f[2][1][1]=dt[1][1];
	for(int k=3; k<=2*n; k++)
		for(int x1=1; x1<=n; x1++)
			for(int x2=x1+1; x2<=n; x2++) {
				if(k-x1<1||k-x1>n)continue;
				if(k-x2<1||k-x2>n)continue;
				f[k][x1][x2]=max(f[k][x1][x2],f[k-1][x1-1][x2-1]);
				f[k][x1][x2]=max(f[k][x1][x2],f[k-1][x1-1][x2]);
				f[k][x1][x2]=max(f[k][x1][x2],f[k-1][x1][x2-1]);
				f[k][x1][x2]=max(f[k][x1][x2],f[k-1][x1][x2]);
				f[k][x1][x2]+=dt[x1][k-x1]+dt[x2][k-x2];
			}
	cout<<f[2*n-1][n-1][n]+dt[n][n];
	return 0;
}
