#include<stdio.h>
#include<math.h>
#define N 1000
using namespace std;

int arr[N],x,sum;
float ave;
char c;

void print_arr(int s[], int n){				//������� 
	for(int i=0;i<n;i++){
		printf("%d\t",s[i]);
	}
	printf("\n");
	return;
}

void quick_sort(int s[], int l, int r){		//���� 
	if(l<r){
		//
		int i=l, j=r, x=s[l];
		while(i<j){
			while( i<j && s[j]>=x )	j--;
			if(i<j)	s[i++] = s[j];
			while( i<j && s[i]<=x ) i++;
			if(i<j)	s[j--] = s[i];
		}
		s[i] = x;
		quick_sort(s, l, i-1);
		quick_sort(s, i+1, r);
	}
	return;
}

bool find(int s[], int x, int l, int r){	//ʹ�ö��ַ����Ҿ������ź������ 
	if(l+1 == r){
		if( x==s[l] || x==s[r] )	return true;
		else						return false;
	}
	int i=int(ceil( (l+r)/2 ));
	if( x>s[i] )		find(s, x, i, r);
	else if( x<s[i] )	find(s, x, l, i);
	else if( x==s[i] )	return true;
}

int main(){
	printf("������һ���������У��ո�ָ����Իس�����\n");
	int n=0;
	do{
		scanf("%d",&arr[n]);
		n++;
		c = getchar();
	}while(c != '\n');
	printf("��������һ����%d����\n",n);
	
	//������� 
	quick_sort(arr, 0, n-1);
	printf("���������飺\n");
	print_arr(arr, n);
	
	//�����еĺ��Լ����е�ƽ��ֵ 
	for(int i=0;i<n;i++){	sum+=arr[i];}
	ave = sum/n;
	printf("���еĺ��ǣ�%d ���е�ƽ��ֵ�ǣ�%f\n",sum,ave);
	
	//����
	printf("�Ӽ�������������һ���������ж��������Ƿ����������\n");
	scanf("%d",&x);
	if( find(arr, x, 0, n) ){
		printf("���������������\n");
	}else{
		printf("������û���������\n");
	}
	
	return 0;
} 
