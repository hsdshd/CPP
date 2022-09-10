#include <iostream>
#include <cmath>
using namespace std;
const int N=30050;
int t,a,b,fa[N],s[N],m[N];
char p;
int find(int x);
int main(){
	cin>>t;
	for(int i=1;i<=30000;i++){
		fa[i]=i;
		s[i]=0;
		m[i]=1;
	}
	for(int i=0,k1,k2;i<t;i++){
		cin>>p>>a>>b;
		k1=find(a);
		k2=find(b);
		if(p=='M'){
			fa[k1]=k2;
			s[k1]+=m[k2];//更新x的根到新的根的距离
            m[k1]+=m[k2];//更新集合大小
            m[k2]=m[k1];//'' 
		}
		if(p=='C'){
			if(k1!=k2)cout<<"-1\n";
			else cout<<abs(s[a]-s[b])-1<<endl;
		}
	}
	system("pause");
	return 0;
} 
int find(int x){
	if(fa[x]==x)return x;
	int k=fa[x];
    fa[x]=find(fa[x]);
    s[x]+=s[k];//更新当前节点到根的距离
    m[x]=m[fa[x]];//更新所在集合大小
    return fa[x];
}
