#include <stdio.h>
int main(){
    int h,i,ii;
    scanf("%d",&h);
    for(i=1;i<h;i=i+2){
        for(ii=0;ii<i;ii++){
            putchar('*');
        }
        for(ii=0;ii<2*(h-i);ii++){
            putchar(' ');
        }
        for(ii=0;ii<i;ii++){
            putchar('*');
        }
        putchar('\n');
    }
    for(;i>0;i=i-2){
        for(ii=0;ii<i;ii++){
            putchar('*');
        }
        for(ii=0;ii<2*(h-i);ii++){
            putchar(' ');
        }
        for(ii=0;ii<i;ii++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
