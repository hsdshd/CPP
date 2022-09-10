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
			s[k1]+=m[k2];//����x�ĸ����µĸ��ľ���
            m[k1]+=m[k2];//���¼��ϴ�С
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
    s[x]+=s[k];//���µ�ǰ�ڵ㵽���ľ���
    m[x]=m[fa[x]];//�������ڼ��ϴ�С
    return fa[x];
}
