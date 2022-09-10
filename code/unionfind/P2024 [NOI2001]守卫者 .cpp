#include<iostream>
#include<cstdio>
using namespace std;
const int N = 50005;
int n,m,father[N*3],food[N*3],ans;
int find(int x){
	if (father[x]==x) return x;
	else return father[x] = find(father[x]);
}
int main(){
	cin>>n>>m;
	for (int i=1;i<=3*n;i++) father[i] = i;
	for (int i=1;i<=n;i++)
		food[i]=i+n,food[i+n]=i+2*n,food[i+2*n]=i;
	int d,x,y,a[3],b[3];
	bool issame;
	for (int i=0;i<m;i++){
		cin>>d>>x>>y;
		if (x>n || y>n){ ans++; continue;	}
		if (d==2 && x==y){ ans++; continue;	}
		a[0] = find(x); a[1] = find(food[a[0]]); a[2] = find(food[a[1]]);
		b[0] = find(y); b[1] = find(food[b[0]]); b[2] = find(food[b[1]]);
		issame = false;
		for (int j=0;j<3;j++)
			if (a[0]==b[j]){
				issame = true;
				break;
			}
		if (d==1){
			if (issame){
				if (a[0]!=b[0]) ans++;
			}				
			else for (int j=0;j<3;j++) father[b[j]] = a[j];
		}
		else{
			if (issame){
				if (a[1]!=b[0]) ans++;
			}
			else for (int j=0;j<3;j++) father[b[j]] = a[(j+1)%3];	
		}				
	}
	cout<<ans<<endl;
	return 0;
}
