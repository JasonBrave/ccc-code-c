#include <stdio.h>
#include <math.h>
int main(){
    int a,t,h,m;
    scanf("%d\n",&h);
    scanf("%d",&m);
    for(t=1;t<m;t++){
        a=-6*pow(t,4)+h*pow(t,3)+2*pow(t,2)+t;
        if(a<=0){
            printf("The balloon first touches ground at hour:\n%d\n",t);
            return 0;
        }
    }
    puts("The balloon does not touch ground in the given time.");
    return 0;
}
