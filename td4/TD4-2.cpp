#include<stdio.h>
using namespace std;

float compute(float x, float y, char oper){
	float ans=0;
	switch(oper){
		case '+':
			ans = x+y;
			break;
			
		case '-':
			ans = x-y;
			break;
			
		case '*':
			ans = x*y;
			break;
			
		case '/':
			ans = x/y;
			break;
		default:
			printf("错误的输入！");
			return 0; 
	}
	return ans;
}

int main(){
	float a,b;
	char oper;
	scanf("%f%c%f",&a,&oper,&b);
	if(b==0 && oper=='/'){
		printf("0不能作为除数！");
		return 0;
	}
	printf("=%f\n",compute(a,b,oper));
	return 0;
}
