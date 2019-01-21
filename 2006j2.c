#include <stdio.h>
int main(){
    int m,n,nn,ways=0;
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    m=(m>9)?(m=9):m;
    n=(n>9)?(n=9):n;
    nn=n;
    for(;m>0;m--){
        n=nn;
        for(;n>0;n--){
            if(m+n==10){
                ways++;
            }
        }
    }
    if(ways==1){
        puts("There is 1 way to get the sum 10");
    }else{
        printf("There are %d ways to get the sum 10\n",ways);
    }
    return 0;
}
