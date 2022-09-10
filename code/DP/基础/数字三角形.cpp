#include <iostream>
#include <algorithm>
using namespace std;
int n,a[35][35],f[35][35];
int main() {
	cin>>n;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=i; j++)
			cin>>a[i][j];
	f[1][1]=a[1][1];
	for(int i=2; i<=n; i++) {
		f[i][1]=f[i-1][1]+a[i][1];
		for(int j=2; j<i; j++)
			f[i][j]=max(f[i-1][j-1],f[i-1][j])+a[i][j];
		f[i][i]=f[i-1][i-1]+a[i][i];
	}
	int ans=-100000000;
	for(int i=1; i<=n; i++)ans=max(ans,f[n][i]);
	cout<<ans;
	return 0;
}
