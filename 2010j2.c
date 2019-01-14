#include <stdio.h>
int main(){
    int a,b,c,d,s,nikky=0,byron=0,turnval;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    scanf("%d\n",&d);
    scanf("%d",&s);
    if(a-b!=0){
    nikky=s/(a+b)*(a-b);
    }
    if(c-d!=0){
    byron=s/(c+d)*(c-d);
    }
    turnval=s-s/(a+b)*(a+b);
    nikky+=(turnval>a)?2*a-turnval:turnval;
    turnval=s-s/(c+d)*(c+d);
    byron+=(turnval>c)?2*c-turnval:turnval;
    if(nikky>byron){
        puts("Nikky");
    }else if(byron>nikky){
        puts("Byron");
    }else{
        puts("Tied");
    }
    return 0;
}
