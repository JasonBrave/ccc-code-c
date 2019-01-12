#include <stdio.h>
int main(){
    int i,now,old,oldold;
    scanf("%d\n",&oldold);
    scanf("%d",&old);
    for(i=3;;i++){
        now=oldold-old;
        if(old<now){
            break;
        }
        oldold=old;
        old=now;
    }
    printf("%d",i);
    return 0;
}
