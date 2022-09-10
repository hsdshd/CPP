#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
const int N=55;
int m,n,dt[N][N],f[2*N][N][N];
int main() {
	cin>>m>>n;
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			cin>>dt[i][j];
	f[2][1][1]=dt[1][1];
	for(int k=3; k<=m+n; k++)
		for(int x1=1; x1<m; x1++)
			for(int x2=x1+1; x2<=m; x2++) {
				if(k-x1<1||k-x1>n||k-x2<1||k-x2>n)continue;
				f[k][x1][x2]=max(f[k][x1][x2],f[k-1][x1-1][x2-1]);
				f[k][x1][x2]=max(f[k][x1][x2],f[k-1][x1-1][x2]);
				f[k][x1][x2]=max(f[k][x1][x2],f[k-1][x1][x2-1]);
				f[k][x1][x2]=max(f[k][x1][x2],f[k-1][x1][x2]);
				f[k][x1][x2]+=dt[x1][k-x1]+dt[x2][k-x2];
			}
	cout<<f[m+m-1][n-1][n]+dt[m][n];
	return 0;
}
