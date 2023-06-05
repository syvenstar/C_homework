#include<stdio.h>
#include<math.h>
using namespace std;

double ans;

double fun(double x){
	return(x*x*x - 5*x*x + 16*x - 80);
}

double xpoint(double xi1, double xi2){
	double x,yi1,yi2;
	yi1=fun(xi1);	yi2=fun(xi2);
	x = (xi1*yi2-xi2*yi1)/(yi2-yi1);
	return x;
}

double root(double xi1, double xi2){
	double x,yi1,y;
	do{
		x = xpoint(xi1,xi2);
		y = fun(x);
		yi1 = fun(xi1);
		if( y*yi1>0 ){
			xi1 = x;
			yi1 = y;
		}else{
			xi2 = x;
		}
	}while( abs(y)>=0.000001 );
	
	return x;
}

int main(){
	//x^3 - 5x^2 + 16x - 80 = y 
	double x1,x2,y1,y2;
	printf("请输入两个数x1和x2：\n");
	scanf("%lf %lf",&x1,&x2);
	y1=fun(x1), y2=fun(x2);
	
	while( y1*y2>0 ){
		printf("y1=%lf 和y2=%lf 同号！ 请再次输入两个不同的数x1和x2：\n",y1,y2);
		scanf("%lf %lf",&x1,&x2);
		y1=fun(x1), y2=fun(x2);
	}
	
	ans = root(x1,x2);
	
	printf("ans=%lf",ans);
	return 0;
} 
