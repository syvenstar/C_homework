#include<stdio.h>
using namespace std;

float a,b,c,ans;

int main(){
	scanf("%f %f %f",&a,&b,&c);
	ans=(a>b)?( (a>c)?a:c ):( (b>c)?b:c );
	printf("The biggest number is: %f",ans);
	return 0;
} 
