#include <iostream>
#include <algorithm>
using namespace std;
int ax[10]={1,3,5,6,9}; 
int main(){
	sort(ax,ax+10);
	int a=lower_bound(ax,ax+10,3)-ax;
	int b=upper_bound(ax,ax+10,3)-ax;
	cout<<ax[a]<<endl<<ax[b];
	return 0;
}
/*lower_bound( begin,end,num)：
从数组的begin位置到end-1位置二分查找第一个大于或等于num的数字，
找到返回该数字的地址，不存在则返回end。通过返回的地址减去起始地址
begin,得到找到数字在数组中的下标。*/

/* upper_bound( begin,end,num)：
从数组的begin位置到end-1位置二分查找第一个大于num的数字，
找到返回该数字的地址，不存在则返回end。通过返回的地址减去起始地址
begin,得到找到数字在数组中的下标。*/ 
