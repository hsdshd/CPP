#include <iostream>
using namespace std;
int v,n,w[35],f[20005];
int main(){
	cin>>v>>n;
	for(int i=1;i<=n;i++)
	cin>>w[i];
	for(int i=1;i<=n;i++)
		for(int j=v;j>=w[i];j--)
			f[j]=max(f[j],f[j]+f[j-w[i]]);
	cout<<f[n];
	return 0;
} 
