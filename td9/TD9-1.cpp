#include<stdio.h>
#define N 101
using namespace std;

double a[N], diff;
int len, max_index, min_index;

void find_index(double arr[], int len, int *max_i, int *min_i){
	for(int i=0;i<len;i++){
		if(arr[i] < arr[*min_i])		*min_i=i;
		else if(arr[i] > arr[*max_i])	*max_i=i;
	}
	return;
}

double find_diff(double arr[], int len){
	double min=arr[0] ,max=arr[0];
	for(int i=0;i<len;i++){
		if(arr[i]<min)		min=arr[i];
		else if(arr[i]>max)	max=arr[i];
	}
	return max-min;
}

int main(){
	printf("请输入要输入的数组的长度：");
	scanf("%d",&len);
	printf("\n请输入长度为%d的double数组的内容：",len);
	for(int i=0;i<len;i++){
		scanf("%lf",&a[i]);
	}
	
	find_index(a,len,&max_index,&min_index);
	printf("最大值的索引是：%d ，最小值的索引是：%d\n",max_index,min_index);
	
	diff = find_diff(a,len);
	printf("数组的最大、最小值之差为：%lf\n",diff);
	return 0;
}
