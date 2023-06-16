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
	printf("������Ҫ���������ĳ��ȣ�");
	scanf("%d",&len);
	printf("\n�����볤��Ϊ%d��double��������ݣ�",len);
	for(int i=0;i<len;i++){
		scanf("%lf",&a[i]);
	}
	
	find_index(a,len,&max_index,&min_index);
	printf("���ֵ�������ǣ�%d ����Сֵ�������ǣ�%d\n",max_index,min_index);
	
	diff = find_diff(a,len);
	printf("����������Сֵ֮��Ϊ��%lf\n",diff);
	return 0;
}
