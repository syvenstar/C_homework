#include<stdio.h>
using namespace std;

int a[3],t;

int main(){
	for(int i=0;i<=2;i++){	scanf("%d",&a[i]);}
	if(a[2]>a[1]){
		t=a[2];
		a[2]=a[1];
		a[1]=t;
	}
	if(a[1]>a[0]){
		t=a[1];
		a[1]=a[0];
		a[0]=t;
	}
	if(a[2]>a[1]){
		t=a[2];
		a[2]=a[1];
		a[1]=t;
	}
	for(int i=0;i<=2;i++){	printf("%d ",a[i]);}
	return 0;
} 
