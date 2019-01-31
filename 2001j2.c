#include <stdio.h>
int main(){
    int x,m,n;
    puts("Enter x:");
    scanf("%d",&x);
    puts("Enter m:");
    scanf("%d",&m);
    for(n=1;n<m;n++){
        if(x*n%m==1){
            printf("%d\n",n);
            return 0;
        }
    }
    puts("No such integer exists.");
    return 0;
}
