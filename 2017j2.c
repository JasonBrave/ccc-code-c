#include <stdio.h>
#include <math.h>
int main(){
    int n,k,i,sum=0;
    scanf("%d\n",&n);
    scanf("%d",&k);
    for(i=0;i<=k;i++){
        sum+=n*pow(10,i);
    }
    printf("%d\n",sum);
    return 0;
}
