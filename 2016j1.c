#include <stdio.h>
int main(){
    int w=0,i;
    for(i=0;i<12;i++){
        if(getchar()=='W'){
            w++;
        }
    }
    if((w==5)||(w==6)){
        putchar('1');
    }else if((w==3)||(w==4)){
        putchar('2');
    }else if((w==1)||(w==2)){
        putchar('3');
    }else{
        puts("-1");
    }
    putchar('\n');
    return 0;
}
