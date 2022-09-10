#include <iostream>
#include <algorithm>
using namespace std;
struct node{
	string name;
	double a,b,c,tot;
	node(){tot=0;}
	node(string mz,double x,double y,double z):name(mz),a(x),b(y),c(z){
		tot=x+y+z;
	}
	bool operator < (const node &x)const{
		if(tot<x.tot)return true;
		else return false;
	}
};
int n;
int main() {
	node a[1000];
	node test("fyh",150,150,150);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].name>>a[i].a>>a[i].b>>a[i].c;
		a[i].tot=a[i].a+a[i].b+a[i].c;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)cout<<a[i].name<<" "<<a[i].a<<" "<<a[i].b<<" "<<a[i].c<<" "<<a[i].tot<<endl;
	return 0;
}
