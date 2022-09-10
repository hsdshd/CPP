#include <iostream>
using namespace std;
int n,m,f[10005],w[105]; 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>w[i];
	f[0]=1;
	for(int i=1;i<=n;i++)
		for(int j=m;j>=w[i];j--)
			f[j]=f[j]+f[j-w[i]];
	cout<<f[m];
	return 0;
} 
