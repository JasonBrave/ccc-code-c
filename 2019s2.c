#include <stdio.h>
int checkprime(int num);

int main(){
	int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		n*=2;
		for(int a=3;a<n;a++){
			if(checkprime(a)&&checkprime(n-a)){
				printf("%d %d\n",a,n-a);
				break;
			}
		}
	}
	return 0;
}

int checkprime(int num){
	for(int i=2;i<num/2;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
