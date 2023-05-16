#include<stdio.h>
using namespace std;

float a[4],x,y;

void sort(float *a, int l){
	int t;
	for(int i;i<l-1;i++){
		for(int j=i+1;j<l;j++){
			if(a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

int main(){
	printf("请输入三个正数：\n");
	scanf("%f%f%f",&a[1],&a[2],&a[3]);
	int l=4;
	sort(a,l);
	//printf("%f %f %f",a[1],a[2],a[3]);
	if(a[1]+a[2]<a[3]){
		printf("不可以构成一个三角形！");
	}else{
		x=a[1]*a[1]+a[2]*a[2];
		y=a[3]*a[3];
		if(x>y){
			printf("可以构成三角形且该三角形为锐角三角形！");
		}else if(x==y){
			printf("可以构成三角形且该三角形为直角三角形！");
		}else if(x<y){
			printf("可以构成三角形且该三角形为钝角三角形！");
		}
	}
	return 0;
}
