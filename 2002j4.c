#include <stdio.h>
int main(){
    int n,d,f,w;
    puts("Numerator");
    scanf("%d",&n);
    puts("Denominator");
    scanf("%d",&d);
    f=(n>d)?n:d;
    for(;f>0;f--){
        if((n%f==0)&&(d%f==0)){
            n=n/f;
            d=d/f;
            break;
        }
    }
    w=n/d;
    if(n%d!=0){
        printf("%d %d/%d\n",w,n%d,d);
    }else{
        printf("%d\n",w);
    }
    return 0;
}
