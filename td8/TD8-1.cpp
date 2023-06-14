#include<stdio.h>
#include<ctype.h>
using namespace std;

int cnt[10], others, space,ch;

int main(){
	while( (ch = getchar()) != EOF ){
		if(isdigit(ch))		cnt[ch-'0']++;
		else if(isspace(ch))	space++;
		else					others++;
	}
	for(int i=0;i<10;i++){
		printf("%d: %d\n",i,cnt[i]);
	}
	printf("Spaces: %d\nOthers: %d\n",space, others);
	return 0;
} 
