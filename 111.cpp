#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float s;int t;float fee;
	scanf("%f %d",&s,&t);
	if(s<=3)
	{
		fee=10;
	}
	else if(s<=10)
	{
		fee=10+2*(s-3);
	}
	else
	{
		fee=24+3*(s-10);
	}
	fee=fee+2*t/5+0.5;
	printf("%d",(int)fee);
	system("pause");
	return 0;
 } 
