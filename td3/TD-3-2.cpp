#include<stdio.h>
using namespace std;

char c,x;
float ans,r,h,a,b;

int main(){
	printf("a.circle b.rectangle c.trapezoid\nPlease choose a type:");
	scanf("%c",&c);
	if(c=='a'){
		printf("Please input the radius:\n");
		scanf("%f",&r);
		ans = 3.14*r*r;
	}
	else if(c=='b'){
		printf("Please input the length and width:\n");
		scanf("%f %f",&a,&b);
		ans = a*b;
	}
	else if(c=='c'){
		printf("Please input the upper base, lower base and height:\n");
		scanf("%f %f %f",&a,&b,&h);
		ans = 0.5*(a+b)*h;
	}
	printf("The area is: %f",ans);
	return 0;
}
