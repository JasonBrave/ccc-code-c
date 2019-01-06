#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d",&c);
    if(a+b+c==180){
        if((a==b)&&(b==c)){
            puts("Equilateral");
        }else{
            if((a!=b)&&(b!=c)&&(a!=c)){
                puts("Scalene");
            }else{
                puts("Isosceles");
            }
        }
    }else{
        puts("Error");
    }
    return 0;
}
