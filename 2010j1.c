#include <stdio.h>
int main(){
    int n,l,r,ways=0;
    scanf("%d",&n);
    l=n;
    for(r=0;r<l;r++){
        l=n-r;
        if((l<=5)&&(r<=5)){
            ways++;
        }
    }
    printf("%d\n",ways);
    return 0;
}
