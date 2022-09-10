#include <iostream>
using namespace std;
int N,m,v[65],p[65],q[65],fj[65][5],f[32010];
int main(){
	cin>>N>>m;
	for(int i=1;i<=m;i++){
		cin>>v[i]>>p[i]>>q[i];
		if(q[i]){
			int k=++fj[q[i]][0];
			fj[q[i]][2*k-1]=v[i];
			fj[q[i]][2*k]=p[i];
		}
	}
	for(int i=1;i<=m;i++){
		if(q[i]==0)
		for(int j=N;j>=v[i];j--){
			f[j]=max(f[j],v[i]*p[i]+f[j-v[i]]);
			if(fj[i][0]>0 && j>=v[i]+fj[i][1])
			f[j]=max(f[j],v[i]*p[i]+fj[i][1]*fj[i][2]+f[j-v[i]-fj[i][1]]);
			if(fj[i][0]>1 && j>=v[i]+fj[i][3])
			f[j]=max(f[j],v[i]*p[i]+fj[i][3]*fj[i][4]+f[j-v[i]-fj[i][3]]);
			if(fj[i][0]>1 && j>=v[i]+fj[i][3]+fj[i][1])
			f[j]=max(f[j],v[i]*p[i]+fj[i][1]*fj[i][2]+fj[i][3]*fj[i][4]+f[j-v[i]-fj[i][3]-fj[i][1]]);
		}
	}
	cout<<f[N];
	return 0;
}
