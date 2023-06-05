#include<stdio.h>
#define N 3
#define M 4
using namespace std;

int num[4][5];
bool yn;

int main(){
	num[2][4]=-1;
	for(int i=1;i<=N && yn==false;i++){
		for(int j=1;j<=M && yn==false;j++){
			if(num[i][j]<0){
				yn = true;
				printf("第一个负数的位置在： %d,%d",i,j);
			}
		}
	}
	return 0;
}
