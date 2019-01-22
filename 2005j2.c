#include <stdio.h>
int main(){
    int l,u,i,ii,divs,rsas=0;
    puts("Enter lower limit of range");
    scanf("%d",&l);
    puts("Enter upper limit of range");
    scanf("%d",&u);
    for(i=l;i<=u;i++){
        divs=0;
        for(ii=1;ii<=i;ii++){
            if(i%ii==0){
                divs++;
            }
        }
        if(divs==4){
            rsas++;
        }
    }
    printf("The number of RSA numbers between %d and %d is %d.\n",l,u,rsas);
    return 0;
}
