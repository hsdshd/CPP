#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N=10100;
struct BigInteger {
	int len,data[N];                 //define data
	//constructors:
	BigInteger() {
		len =1;
		memset(data,0,sizeof(data));
	}
	BigInteger(int x) {
		*this=x;
	}
	BigInteger(const char *s) {
		*this=s;
	}
	BigInteger(const string &s) {
		*this=s;
	}
	//Operator overloading:
	//PART 1 initiallization
	BigInteger operator =(int x){
		char s[20];
		memset(s,0,sizeof(s));
		sprintf(s,"%d",x);
		*this = s;
		return *this;
	}
	BigInteger operator = (const char *s) {
		memset(data,0,sizeof(data));
		len=strlen(s);
		for(int i=0; i<len; i++)
			data[i]=s[len-1-i]-'0';
		return *this;
	}
	BigInteger operator =(const string &s) {
		return *this = s.c_str() ;
	}
	//PART 2 comparision
	bool operator <(const BigInteger &x)const {
		if(len!=x.len)return len<x.len;
		for(int i=len-1; i>=0; i--)
			if(data[i]!=x.data[i])
				return data[i]<x.data[i];
		return false;
	}
	bool operator > (const BigInteger &x) {
		return x < *this;
	}
	bool operator <= (const BigInteger &x) {
		return ! (x < *this);
	}
	bool operator >= (const BigInteger &x) {
		return !(*this < x);
	}
	bool operator == (const BigInteger &x) {
		return !(*this<x) && !(x < *this);
	}
	bool operator != (const BigInteger &x) {
		return *this < x || x < *this;
	}
	//PART 3 calculation
	BigInteger operator +(const BigInteger &b) {
		BigInteger r;
		r.len=max(len,b.len);
		for(int i=0; i<r.len; i++) {
			r.data[i]+=data[i]+b.data[i];
			r.data[i+1]=r.data[i]/10;
			r.data[i]%=10;
		}
		if(r.data[r.len])r.len++;
		return r;
	}
	BigInteger operator -(const BigInteger &b) {
		BigInteger r;
		r.len = len;
		for (int i=0; i<r.len; i++) {
			r.data[i] += data[i]-b.data[i];
			if (r.data[i]<0) {
				r.data[i+1]--;
				r.data[i] += 10;
			}
		}
		r.clear0() ;
		return r;
	}
	BigInteger operator *(const BigInteger &b) {
		BigInteger r;
		r.len = len + b.len - 1;
		for (int i=0; i<len; i++)
			for (int j=0; j<b.len; j++) {
				r.data[i+j] += data[i] * b.data[j];
				r.data[i+j+1] += r.data[i+j] / 10;
				r.data[i+j] %= 10;
			}
		if (r.data[r.len]) r.len++;
		r.clear0() ;
		return r;
	}
	BigInteger operator /(const BigInteger &b) {
		BigInteger c,d;
		c.len = len;
		for (int i=len-1; i>=0; i--) {
			for (int j=d.len; j>0; j--) d.data[j] = d.data[j-1];
			if (d.data[d.len]) d.len++;
			d.data[0] = data[i];
			while (d>=b) {
				d = d-b;
				c.data[i]++;
			}
		}
		c.clear0() ;
		return c;
	}
	BigInteger operator %(const BigInteger &b) {
		BigInteger c,d;
		c.len = len;
		for (int i=len-1; i>=0; i--) {
			for (int j=d.len; j>0; j--) d.data[j] = d.data[j-1];
			if (d.data[d.len]) d.len++;
			d.data[0] = data[i];
			while (d>=b) {
				d = d-b;
				//c.data[i]++;
			}
		}
		//c.clear0() ;
		return d;
	}
	//PART 4 iostream
	friend istream& operator >>(istream& input,BigInteger &x) {
		string s;
		input>>s;
		x=s;
		return input;
	}
	friend ostream& operator << (ostream& output,BigInteger x) {
		output<<x.str();
		return output;
	} 
	//functions
	string str() {
		string r;
		for (int i=len-1; i>=0; i--) r += (char)('0'+data[i]);
		return r;
	}
	void clear0() {
		while (data[len-1]==0 && len>1) len--;
	}
};
int main() {
	BigInteger x,y;
	cin>>x>>y;
	cout<<x*y;
	system("pause");
	return 0;

}
