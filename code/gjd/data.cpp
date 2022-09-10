#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("gjd.in","w",stdout);
	srand((unsigned)time(0));
	long long a,b;
	a = rand()*rand();
	do {
		b = rand()*rand();
	}while (b==0);
	cout<<a<<" "<<b<<endl;
	return 0;
}
