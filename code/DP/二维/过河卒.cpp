#include <bits/stdc++.h>
using namespace std;
const int fx[]={0,-2,-1,1,2,2,1,-1,-2};
const int fy[]={0,1,2,2,1,-1,-2,-2,-1};
unsigned long long f[30][30];
bool s[30][30];
int n,m,x,y;
int main(){
	cin>>n>>m>>x>>y;
	++n;++m;++x;++y;
	f[1][1]=1;
	s[x][y]=1;
	for(int i=1;i<=8;i++)
		s[x+fx[i]][y+fy[i]]=1;
	for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i][j])continue;
            f[i][j]=max(f[i][j],f[i-1][j]+f[i][j-1]); 
        }
    }
    cout<<f[n][m];
    return 0;
}
