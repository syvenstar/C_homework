#include<stdio.h>
#include<math.h>
#define NUM 100000
#define max(a,b) ( ((a)>(b)) ? (a):(b) )
#define min(a,b) ( ((a)>(b)) ? (b):(a) )
using namespace std;

int a,b,c,n,t,pr[NUM],ans,maxi,mini;
float x;

int main(){
	printf("请输入两个正整数：");
	scanf("%d%d",&a,&b);
	//初始化数据 
	pr[1]=1;	pr[2]=2;
	n = 2; 
	maxi=max(a,b);
	mini=min(a,b);
	x = sqrt(maxi);
	c = ceil(x);		//c为maxi的可能最大除数（maxi的除数都会比c小） 
	
	//这里使用查表的方法，先把1-maxi的质数都找出来 
	for(int i=3;i<=maxi;i++){
		int re=0;
		for(int j=2;j<=n;j++){
			re = i%pr[j];
			if(re==0)	break;
		}
		if(re==0) continue;
		n++;
		pr[n]=i;
	}
	
	//for(int i=1;i<=n;i++){	printf("%d ",pr[i]);}	//输出所有已知质数 
	
	for(int i=n;i>=1;i--){
		if(pr[i]<mini)	break;
		ans=ans+pr[i];
	}
	printf("两个正整数间所有质数的和：%d",ans);
	return 0;
}
