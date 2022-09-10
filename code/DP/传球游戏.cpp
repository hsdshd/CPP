#include <iostream>
#include <algorithm>
using namespace std;
int n,m,f[35][35];
int main(){
	cin>>n>>m;
	f[0][0]=1;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		f[i][j]=f[(i-1+n)%n][j-1]+f[(i+1+n)%n][j-1];
	int max_=-1;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++){
		max_=max(max_,f[i][j]);
		cout<<f[i][j];
	}
	cout<<max_;
	return 0;
}
