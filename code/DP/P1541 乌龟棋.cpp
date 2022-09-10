#include <iostream>
#include <cstdio>
#include <algorithm>
#define FOR for(int x1=0; x1<=tot[1]; x1++)for(int x2=0; x2<=tot[2]; x2++)for(int x3=0; x3<=tot[3]; x3++)for(int x4=0; x4<=tot[4]; x4++)
using namespace std;
const int N=400;
int n,m,tot[5],a[N],f[45][45][45][45],k;
int main() {
	cin>>n>>m;
	for(int i=0; i<n; i++)cin>>a[i];
	for(int i=0,x; i<m; i++) {
		cin>>x;
		tot[x]++;
	}
	f[0][0][0][0]=a[0];
	FOR {
		if(x1==0&&x2==0&&x3==0&&x4==0)continue;
		if(x1>0)
			f[x1][x2][x3][x4]=max(f[x1][x2][x3][x4],f[x1-1][x2][x3][x4]);
		if(x2>0)
			f[x1][x2][x3][x4]=max(f[x1][x2][x3][x4],f[x1][x2-1][x3][x4]);
		if(x3>0)
			f[x1][x2][x3][x4]=max(f[x1][x2][x3][x4],f[x1][x2][x3-1][x4]);
		if(x4>0)
			f[x1][x2][x3][x4]=max(f[x1][x2][x3][x4],f[x1][x2][x3][x4-1]);
			f[x1][x2][x3][x4]+=a[x1+2*x2+3*x3+4*x4];
	}
	cout<<f[tot[1]][tot[2]][tot[3]][tot[4]]<<endl;
	return 0;
}
