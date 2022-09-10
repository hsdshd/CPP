#include<iostream>
using namespace std;
bool Is_prime(int n){
    if(n==1)return false;
    if(n==2)return true;
    for(int j=2;j*j<=n ; j++)
        if(n%j==0)return false;
    return true;    
}
int a,b,ax[100050];
int main(){
    cin>>a>>b;
    for(int i=1;i<=b;i++)cin>>ax[i];
    for(int i=1;i<=b;i++)if(Is_prime(ax[i]))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
