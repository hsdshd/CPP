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
/*lower_bound( begin,end,num)��
�������beginλ�õ�end-1λ�ö��ֲ��ҵ�һ�����ڻ����num�����֣�
�ҵ����ظ����ֵĵ�ַ���������򷵻�end��ͨ�����صĵ�ַ��ȥ��ʼ��ַ
begin,�õ��ҵ������������е��±ꡣ*/

/* upper_bound( begin,end,num)��
�������beginλ�õ�end-1λ�ö��ֲ��ҵ�һ������num�����֣�
�ҵ����ظ����ֵĵ�ַ���������򷵻�end��ͨ�����صĵ�ַ��ȥ��ʼ��ַ
begin,�õ��ҵ������������е��±ꡣ*/ 
