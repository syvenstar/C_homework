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
	printf("这个整数%d的所有约数:",n);
	for(int i=1;i<=n;i++){
		if(n%i==0)	printf("%d\t",i);
	}
	printf("\n");
	return;
}

int BigCommonDivisor(int m, int n){
	//欧几里得算法
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
	printf("判断一个整数是否为素数：\n");
	scanf("%d",&a);
	if(IsPrime(a))	printf("%d是素数\n",a);
	else			printf("%d不是素数\n",a);
	
	printf("\n输出一个整数的所有约数：\n");
	scanf("%d",&b);
	Allfactors(b);
	
	printf("\n求两个整数的最大公约数\n");
	scanf("%d %d",&x,&y);
	int ans = BigCommonDivisor(x,y);
	printf("这两个数的最大公约数为：%d",ans);
	return 0;
}
