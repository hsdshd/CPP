#include <iostream>
#include <string.h>
using namespace std;
string x;
int ans;
int main()
{
	getline(cin,x);
    for(int i=0;i<x.length();i++)
    if(x[i]!=' ')
    ans++;
	cout<<ans;
    system("pause");
	return 0;
 } 