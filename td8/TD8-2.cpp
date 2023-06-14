#include<stdio.h>
using namespace std;

bool cnt[101];

int main(){
	cnt[1]=true;
	for(int i=2;i<=100;i++){
		if(cnt[i]==true)	continue;
		if(cnt[i]==false){
			int x=0;
			for(int j=2;x<=100;j++){
				x=i*j;
				cnt[x] = true;
			}
		}
	}

	printf("以下是1-100的素数：\n");
	for(int i=1;i<=100;i++){
		if(cnt[i]==false)	printf("%d ",i);
		if(i%20==0)	printf("\n");
	}
	return 0;
}
