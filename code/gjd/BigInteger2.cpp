#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N=100005;
struct BigInteger {
	int len,data[N];
	//constructors
	BigInteger() {
		len=1;
		memset(data,0,sizeof(data));
	}
	BigInteger(int x) {
		*this=x;
	}
	BigInteger(const char *s) {
		*this=s;
	}
	BigInteger(const string s) {
		*this=s;
	}
	//operator overfloading
	BigInteger operator =(int x) {
		char s[20];
		memset(s,0,sizeof(s));
		sprintf(s,"%d",x);
		*this=s;
		return *this;
	}
	BigInteger operator =(const char *s) {
		memset(data,0,sizeof(data));
		len=strlen(s);
		for(int i=0; i<len; i++)
			data[i]=s[len-1-i]-'0';
		return *this;
	}
	BigInteger operator =(const string &s) {
		return *this=s.c_str();
	}
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
		for(int i=len-1; i>=0; i--)
			r+=(char)(data[i]+'0');
		return r;
	}
};
int main() {
	BigInteger a(233333333),b;
	cin>>a>>b;
	cout<<a<<" "<<b;
	return 0;
}
