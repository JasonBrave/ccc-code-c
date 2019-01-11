#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    scanf("%d",&d);
    if((a<b)&&(b<c)&&(c<d)){
        puts("Fish Rising");
    }else if((a>b)&&(b>c)&&(c>d)){
        puts("Fish Diving");
    }else if((a==b)&&(b==c)&(c==d)){
        puts("Constant Depth");
    }else{
        puts("No Fish");
    }
    return 0;
}
