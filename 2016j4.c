#include <stdio.h>
int main(){
    int hour,min,exadd=0,dist=120;
    scanf("%2d:%2d",&hour,&min);
    while(dist!=0){
        if(((hour>=7)&&(hour<10))||((hour>=15)&&(hour<19))){
            dist-=5;
        }else{
            dist-=10;
        }
        min+=10;
        if(min==60){
            min=0;
            hour++;
        }
        hour=hour%24;     
    }
    printf("%02d:%02d\n",hour,min);
    return 0;
}
