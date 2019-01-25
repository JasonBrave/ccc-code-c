#include <stdio.h>
int main(){
    int t,i;
    puts("Number of tiles?");
    scanf("%d",&t);
    for(i=1;;i++){
        if(i*i==t){
            break;
        }
        if((i+1)*(i+1)>t){
            break;
        }
    }
    printf("The largest square has side length %d.\n",i);
    return 0;
}
