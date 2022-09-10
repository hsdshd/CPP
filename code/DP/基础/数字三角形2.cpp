#include <iostream>
#include <algorithm>
using namespace std;
int n,a[30][30];
bool f[35][35][105];
int output(){
	for(int k=99;k>=0;k--)
	for(int j=1;j<=n;j++)
	if(f[n][j][k])return k;
}
int main() {
	cin>>n;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=i; j++)
			cin>>a[i][j];
	f[1][1][a[1][1]%100]=1;
	for(int i=2; i<=n; i++) {
		for(int k=0;k<99;k++)
		f[i][1][(a[i][1]+k)%100]=f[i-1][1][k];
		for(int j=2; j<i; j++)
		for(int k=0;k<99;k++)
			f[i][j][(a[i][i]+k)%100]=f[i-1][j-1][k]||f[i-1][j][k];
		for(int k=0;k<99;k++)
		f[i][i][(a[i][i]+k)%100]=f[i-1][i-1][k];
	}
	cout<<output();
	return 0;
}
