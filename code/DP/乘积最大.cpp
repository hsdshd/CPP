#include<bits/stdc++.h>
//#define bign long long
using namespace std;
const int N = 45;
struct bign{
	int len,data[N];
	bign(){	len=1; memset(data,0,sizeof(data)); }
	bign(int x){ *this = x;	}
	bign operator =(int x){
		memset(data,0,sizeof(data));
		for (len=0;x;x/=10)
			data[len++] = x%10;
		if (len==0) len=1;
		return *this;
	}
	bool operator <(bign x)const{
		if (len != x.len) return len < x.len;
		for (int i=len-1;i>=0;i--)
			if (data[i] != x.data[i])
				return data[i]<x.data[i];
		return false;
	}	
	bool operator >(bign x){
		return x < *this;
	}	
	bign operator +(bign b){
		bign r;
		r.len = max(len,b.len);
		for (int i=0;i<r.len;i++){
			r.data[i] += data[i]+b.data[i];
			r.data[i+1] += r.data[i]/10;
			r.data[i] %= 10;
		}
		if (r.data[r.len] && len>1) r.len++;
		return r;
	}	
	void clear0(){
		while (data[len-1]==0 && len>1) len--;
	}
	bign operator *(bign b){
		bign r;
		r.len = len + b.len - 1;
		for (int i=0;i<len;i++)
			for (int j=0;j<b.len;j++){
				r.data[i+j] += data[i] * b.data[j];
				r.data[i+j+1] += r.data[i+j] / 10;
				r.data[i+j] %= 10;
			}
		if (r.data[r.len]) r.len++;
		r.clear0() ;
		return r;		
	}	
	string str(){
		string r;
		for (int i=len-1;i>=0;i--) r += (char)('0'+data[i]);
		return r;
	}
	friend ostream& operator <<(ostream& output,bign x){
		output << x.str() ;
		return output;
	}
};
int n,K;
bign a[N],num[N][N],f[N][10];
void init(){
	string s;
	cin>>n>>K;
	cin>>s;
	for (int i=0;i<n;i++)
		a[i+1] = s[i]-'0';
	for (int i=1;i<=n;i++){
		num[i][1] = a[i];
		for (int j=2;j<=n-i+1;j++)
			num[i][j] = num[i][j-1]*10+a[i+j-1];
	}	
}
void solve(){
	for (int i=1;i<=n;i++) f[i][0] = num[1][i];
	for (int j=1;j<=K;j++)
		for (int i=j+1;i<=n;i++)
			for (int k=j;k<i;k++)
				f[i][j] = max(f[i][j],f[k][j-1]*num[k+1][i-k]);
	cout<<f[n][K];
}
int main(){
	init();
	solve();
	return 0;
}
