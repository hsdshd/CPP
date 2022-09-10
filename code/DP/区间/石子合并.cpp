#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
const int INF=0x3f3f3f3f,N=105;
using namespace std;
int n,a[N],sum[N][N],f[N][N];
int getmin(){
	memset(f,0,sizeof(f));
	for(int k=2;k<=n;k++)
	for(int i=0;i<n;i++){
		f[i][k]=INF;
		for(int j=1;j<k;j++)
		f[i][k]=min(f[i][k],f[i][j]+f[(i+j)%n][k-j]+sum[i][k]);
	}
	int ans=INF;
	for(int i=0;i<n;i++)
	ans=min(ans,f[i][n]);
	return ans;
}
int getmax(){
	memset(f,0,sizeof(f));
	for(int k=2;k<=n;k++)
	for(int i=0;i<n;i++){
		f[i][k]=0;
		for(int j=1;j<k;j++)
		f[i][k]=max(f[i][k],f[i][j]+f[(i+j)%n][k-j]+sum[i][k]);
	}
	int ans=0;
	for(int i=0;i<n;i++)
	ans=max(ans,f[i][n]);
	return ans;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		sum[i][1]=a[i];
		for(int j=2;j<=n;j++)
		sum[i][j]=sum[i][j-1]+a[(i+j-1)%n];
	}
	cout<<getmin()<<endl<<getmax();
	return 0;
}
