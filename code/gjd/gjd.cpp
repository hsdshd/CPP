#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 1005;
struct bign{
	int len,data[N];
	bign(){	len=1; memset(data,0,sizeof(data)); }
	bign(int x){ *this = x;	}
	bign(const char *s){ *this = s;	}
	bign(const string s){ *this = s; }
	bign operator =(int x){
		char s[20];
		memset(s,0,sizeof(s));
		sprintf(s,"%d",x);
		*this = s;
		return *this;
	}
	bign operator =(const char *s){
		memset(data,0,sizeof(data));
		len = strlen(s);
		for (int i=0;i<len;i++)
			data[i] = s[len-1-i]-'0';
		clear0();
		return *this;
	}
	bign operator =(const string &s){
		return *this = s.c_str() ;
	}   
	bool operator <(bign x)const{
		if (len != x.len) return len < x.len;
		for (int i=len-1;i>=0;i--)
			if (data[i] != x.data[i])
				return data[i]<x.data[i];
		return false;
	}
	bool operator <=(const bign &x){
		return !(x < *this);
	}
	bool operator >(const bign &x){
		return x < *this;
	}
	bool operator >=(const bign &x){
		return !(*this < x);
	}
	bool operator ==(const bign &x){
		return !(*this < x) && !(x < *this);
	}
	bool operator !=(bign x){
		return *this < x || x < *this;
	}
	bign operator +(const bign &b){
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
	bign operator -(const bign &b){
		bign r;
		r.len = len;
		for (int i=0;i<r.len;i++){
			r.data[i] += data[i]-b.data[i];
			if (r.data[i]<0){
				r.data[i+1]--;
				r.data[i] += 10;
			}
		}
		r.clear0() ;
		return r;
	}
	bign operator *(const bign &b){
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
	bign operator /(const bign &b){
		bign c,d;
		c.len = len;
		for (int i=len-1;i>=0;i--){
			for (int j=d.len;j>0;j--) d.data[j] = d.data[j-1];
			if (d.data[d.len]) d.len++;
			d.data[0] = data[i];
			while (d>=b){
				d = d-b;
				c.data[i]++;
			}
		}
		c.clear0() ;
		return c;
	}
	bign operator %(const bign &b){
		bign c,d;
		c.len = len;
		for (int i=len-1;i>=0;i--){
			for (int j=d.len;j>0;j--) d.data[j] = d.data[j-1];
			if (d.data[d.len]) d.len++;
			d.data[0] = data[i];
			while (d>=b){
				d = d-b;
				//c.data[i]++;
			}
		}
		//c.clear0() ;
		return d;
	}
	string str(){
		string r;
		for (int i=len-1;i>=0;i--) r += (char)('0'+data[i]);
		return r;
	}
	friend istream& operator >>(istream& input,bign &x){
		string s;
		input>>s;
		x = s;
		return input;
	}
	friend ostream& operator <<(ostream& output,bign x){
		output << x.str() ;
		return output;
	}
};
int main(){
	freopen("gjd.in","r",stdin);
	freopen("gjd.out","w",stdout);
	bign a,b;
	cin>>a>>b;
	cout<<a+b<<endl;
	
	if (a>=b) 
		cout<<a-b<<endl;
	else 
		cout<<"-"<<b-a<<endl;
	
	cout<<a*b<<endl;
	
	if (b!=0) 
		cout<<a/b<<endl;
	else 
		cout<<"div zero error!\n";
	
	if (b!=0) 
		cout<<a%b<<endl;
	else 
		cout<<"div zero error!\n";
			
	return 0;
}
