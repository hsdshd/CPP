#include <iostream>
using namespace std;
int s,m,f[10005],w[105],t[105]; 
int main(){
	cin>>s>>m;
	for(int i=1;i<=m;i++)
		cin>>t[i]>>w[i];
	for(int i=1;i<=m;i++)
		for(int j=s;j>=t[i];j--)
			f[j]=max(f[j],w[i]+f[j-t[i]]);
	cout<<f[s];
	return 0;
} 
