#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N=100005;
struct BigInteger{
	int len,data[N];
	//constructors
	BigInteger(){
		len=1;
		memset(data,0,sizeof(data));
	}
	BigInteger(int x){
		memset(data,0,sizeof(data));
		for(len=0;x>0;x/=10)
		data[len++]=x%10;
		if(len==0)len=1;
	}
	
};
int main(){
	BigInteger x(45757457);

	return 0;
}
