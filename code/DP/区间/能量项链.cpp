#include <iostream>
#include <algorithm>
using namespace std;
int n,h[105],f[105][105],ans=-1;

int main(){

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>h[i];
		f[i][1]=0;
	}
	
	for(int k=2;k<=n;k++)
		for(int i=0;i<n;i++)
			for(int j=1;j<k;j++)
			f[i][k]=max(f[i][k],f[i][j]+f[(i+j)%n][k-j]+h[i]*h[(i+j)%n]*h[(i+k)%n]);
	
	for(int i=0;i<n;i++)
	ans=max(ans,f[i][n]);
	cout<<ans;
	return 0;
}
