#include <stdio.h>
#include <string.h>
int distinctdigits(int y);
int main(){
    int y;
    scanf("%d",&y);
    y++;
    while(!distinctdigits(y)){
        y++;
    }
    printf("%d",y);
    return 0;
}

int distinctdigits(int y){
    char year[6];
    int i,ii,distinct=1;
    sprintf(year,"%d",y);
    for(i=0;i<strlen(year);i++){
        for(ii=i+1;ii<strlen(year);ii++){
            if(year[i]==year[ii]){
                distinct=0;
            }
        }
    }
    return distinct;
}
