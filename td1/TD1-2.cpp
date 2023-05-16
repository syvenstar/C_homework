#include<stdio.h>
using namespace std;

float A=10.0, B=20.0, t;

int main(){
	t = A;
	A = B;
	B = t;
	printf("%f, %f",A,B);
	return 0;
} 
