#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 20
using namespace std;

void sort(int arr[], int a, int b){
	int t;
	for(int i=0;i<floor(b/2);i++){
		t=*(arr+a+i);
		*(arr+i+a) = *(arr+a+b-i-1);
		*(arr+b-i+a-1) = t;
	}
	return;
}

int main(){
	int arr[N],a,b;
	printf("��ʼ������a��\n");
	for(int i=0;i<N;i++){
		arr[i] = rand()%101;
		printf("%d ",arr[i]);
	}
	printf("\n\n������a��b��\n");
	scanf("%d%d",&a,&b);
	
	sort(arr,a,b);
	printf("\n\n���������飺\n");
	for(int i=0;i<N;i++){	printf("%d ",arr[i]);}
	return 0;
}
