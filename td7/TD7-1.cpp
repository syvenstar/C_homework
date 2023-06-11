#include<stdio.h>
#include<math.h>
#define N 1000
using namespace std;

int arr[N],x,sum;
float ave;
char c;

void print_arr(int s[], int n){				//输出数组 
	for(int i=0;i<n;i++){
		printf("%d\t",s[i]);
	}
	printf("\n");
	return;
}

void quick_sort(int s[], int l, int r){		//快排 
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

bool find(int s[], int x, int l, int r){	//使用二分法查找经过快排后的数组 
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
	printf("请输入一行整型数列，空格分隔，以回车结束\n");
	int n=0;
	do{
		scanf("%d",&arr[n]);
		n++;
		c = getchar();
	}while(c != '\n');
	printf("这行数组一共有%d个数\n",n);
	
	//排序并输出 
	quick_sort(arr, 0, n-1);
	printf("排序后的数组：\n");
	print_arr(arr, n);
	
	//求数列的和以及数列的平均值 
	for(int i=0;i<n;i++){	sum+=arr[i];}
	ave = sum/n;
	printf("数列的和是：%d 数列的平均值是：%f\n",sum,ave);
	
	//猜数
	printf("从键盘中任意输入一个整数，判断数列中是否包含此数：\n");
	scanf("%d",&x);
	if( find(arr, x, 0, n) ){
		printf("数列中有这个数！\n");
	}else{
		printf("数列中没有这个数！\n");
	}
	
	return 0;
} 
