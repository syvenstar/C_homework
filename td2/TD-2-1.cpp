#include<stdio.h>
#include<math.h>
using namespace std;

float a,b,c,d,ans1,ans2;

int main(){
	scanf("%f%f%f",&a,&b,&c);
	d = b*b-4*a*c;
	if(d>0){
		ans1 = -b+sqrt(d)*0.5/a;
		ans2 = -b-sqrt(d)*0.5/a;
		printf ("����������ʵ������x1=%f x2=%f",ans1,ans2) ;
	}else 
	if(d==0){
		ans1 = -b/a/2;
		printf ("������������ȵ�ʵ������ x=%f",ans1) ;
	}else{
		printf("������ʵ������");
	}
	return 0;
}
