#include<stdio.h>
#include<math.h>
#define max(a,b) ( ((a)>(b)) ? (a):(b) )
#define min(a,b) ( ((a)>(b)) ? (b):(a) )
using namespace std;

int IsPrime(int n){
	int x,c; 
	x = sqrt(n);
	c = ceil(x);
	for(int i=2;i<=c;i++){
		if(n%i==0)	return 0;
	}
	return 1;
}

void Allfactors(int n){
	printf("�������%d������Լ��:",n);
	for(int i=1;i<=n;i++){
		if(n%i==0)	printf("%d\t",i);
	}
	printf("\n");
	return;
}

int BigCommonDivisor(int m, int n){
	//ŷ������㷨
	int maxi=max(m,n), mini=min(m,n);
	while(n!=0){
		int temp=m%n;
		m = n;
		n = temp;
	}
	return m;
}

int main(){
	int x,y,a,b;
	printf("�ж�һ�������Ƿ�Ϊ������\n");
	scanf("%d",&a);
	if(IsPrime(a))	printf("%d������\n",a);
	else			printf("%d��������\n",a);
	
	printf("\n���һ������������Լ����\n");
	scanf("%d",&b);
	Allfactors(b);
	
	printf("\n���������������Լ��\n");
	scanf("%d %d",&x,&y);
	int ans = BigCommonDivisor(x,y);
	printf("�������������Լ��Ϊ��%d",ans);
	return 0;
}
