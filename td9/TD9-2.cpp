#include<stdio.h>
#define NUM 101
using namespace std;

void copy_arr(int a[], int b[], int len){
	for(int i=0;i<len;i++){
		b[i] = a[i];
	}
	return;
}

void copy_ptr(int *a, int *c, int len){
	for(int i=0;i<len;i++){
		*(c+i) = *(a+i);
	}
	return;
}

void print_arr(int arr[], int len){
	for(int i=0;i<len;i++){
		printf("%d, ",arr[i]);
	}
	printf("\n");
	return;
}

int main(){
	int aa[NUM] = {9,8,7,6,5,4,3,2,1,0};
	int bb[NUM] = {};
	int cc[NUM] = {};
	int n=10;
	
	printf("原数组：\n");
	print_arr(aa, n);
	
	copy_arr(aa, bb, n);
	printf("经过第一个拷贝函数的数组内容：\n");
	print_arr(bb, n);
	
	copy_ptr(aa, cc, n);
	printf("经过第二个拷贝函数的数组内容：\n");
	print_arr(cc, n);
	return 0;
}
