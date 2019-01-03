#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,t,x,y;
    scanf("%d %d\n",&a,&b);
    scanf("%d %d\n",&c,&d);
    scanf("%d",&t);
    x=abs(a-b);
    y=abs(c-d);
    if((x+y)<t){
        puts("Y");
    }else{
        puts("N");
    }
    return 0;
}
