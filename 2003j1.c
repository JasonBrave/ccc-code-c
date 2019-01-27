#include <stdio.h>
int main(){
    int t,s,h,i,ii;
    puts("Enter tine length:");
    scanf("%d",&t);
    puts("Enter tine spacing:");
    scanf("%d",&s);
    puts("Enter handle length:");
    scanf("%d",&h);
    for(i=0;i<t;i++){
        putchar('*');
        for(ii=0;ii<s;ii++){
            putchar(' ');
        }
        putchar('*');
        for(ii=0;ii<s;ii++){
            putchar(' ');
        }
        putchar('*');
        putchar('\n');
    }
    for(i=0;i<3+2*s;i++){
        putchar('*');
    }
    putchar('\n');
    for(i=0;i<h;i++){
        for(ii=0;ii<s+1;ii++){
            putchar(' ');
        }
        putchar('*');
        putchar('\n');
    }
    return 0;
}
