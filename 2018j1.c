#include <stdio.h>
int main(){
    int i,dig[3];
    for(i=0;i<=3;i++){
        scanf("%d",&dig[i]);
    }
    if((dig[0]==8)||(dig[0]==9)){
        if((dig[3]==8)||(dig[3]==9)){
            if(dig[1]==dig[2]){
                puts("ignore");
            }else{
                puts("answer");
            }
        }else{
            puts("answer");
        }
    }else{
        puts("answer");
    }
    return 0;
}
