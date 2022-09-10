#include <cstdio>
#include <iostream>
using namespace std;
int n,ax[1005],f[1005],ans;
int main(){
	//freopen("1.in","r",stdin);
	//freopen("1.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&ax[i]);	
		f[i]=1;
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<i;j++)
	if(ax[j]<=ax[i])
		f[i]=max(f[i],f[j]+1);
    for(int i=1;i<=n;i++)
	ans=max(ans,f[i]);
	cout<<ans;
	system("pause");
	return 0;
} 
