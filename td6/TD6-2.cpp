#include<stdio.h>
#include<string.h>
#define N 100
using namespace std;

char str1[N],str2[N];
int l1,l2;

int main(){
	printf("�����������ַ���:\n");
	scanf("%s %s",&str1,&str2);
	l1 = strlen(str1);
	l2 = strlen(str2);
	
	printf("�����ַ����ĳ��ȷֱ�Ϊ��%d %d\n",l1,l2);
	for(int i=0;i<l2;i++){
		str1[l1+i]=str2[i];
	}
	str1[l1+l2]='\0';
	printf("�ϲ�����ַ������ȣ�%d\n",strlen(str1));
	printf("�ϲ�����ַ�����%s",str1);
	return 0;
}
