#include <stdio.h>
int main(){
	int a=1,b=2,c=3,d=4;
	//|a|b|
	//|c|d|
	char in[1000005];
	int i=0;
	int tmp;
	fgets(in,1000005,stdin);
	while(in[i]!='\n'){
		if(in[i]=='H'){
			tmp=a;
			a=c;
			c=tmp;
			tmp=b;
			b=d;
			d=tmp;
		}else{
			tmp=a;
			a=b;
			b=tmp;
			tmp=c;
			c=d;
			d=tmp;
		}
		i++;
	}
	printf("%d %d\n%d %d\n",a,b,c,d);
	return 0;
}
