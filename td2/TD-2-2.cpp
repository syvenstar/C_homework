#include<stdio.h>
#include<math.h>
#define NUM 100000
#define max(a,b) ( ((a)>(b)) ? (a):(b) )
#define min(a,b) ( ((a)>(b)) ? (b):(a) )
using namespace std;

int a,b,c,n,t,pr[NUM],ans,maxi,mini;
float x;

int main(){
	printf("������������������");
	scanf("%d%d",&a,&b);
	//��ʼ������ 
	pr[1]=1;	pr[2]=2;
	n = 2; 
	maxi=max(a,b);
	mini=min(a,b);
	x = sqrt(maxi);
	c = ceil(x);		//cΪmaxi�Ŀ�����������maxi�ĳ��������cС�� 
	
	//����ʹ�ò��ķ������Ȱ�1-maxi���������ҳ��� 
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
	
	//for(int i=1;i<=n;i++){	printf("%d ",pr[i]);}	//���������֪���� 
	
	for(int i=n;i>=1;i--){
		if(pr[i]<mini)	break;
		ans=ans+pr[i];
	}
	printf("���������������������ĺͣ�%d",ans);
	return 0;
}
