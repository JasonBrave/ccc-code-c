#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int i,u=0;
    char yest[n+3];
    char today[n+3];
    fgets(yest,n+3,stdin);
    fgets(today,n+3,stdin);
    for(i=0;i<n;i++){
        if((yest[i]=='C')&&(today[i]=='C')){
            u++;
        }
    }
    printf("%d\n",u);
    return 0;
}
