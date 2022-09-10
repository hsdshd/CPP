#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int N=1005;
int n,dt[N][N],f[N][N];
int main() {
	cin>>n;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			cin>>dt[i][j];
	f[2][1]=dt[1][1];
	for(int k=3; k<=2*n; k++)
		for(int i=1; i<=n; i++) {
		if(k-i<1||k-i>n)continue;
		f[k][i]=max(f[k-1][i-1],f[k-1][i])+dt[i][k-i];
	}
	cout<<f[2*n][n];
	return 0;
}
