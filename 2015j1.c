#include <stdio.h>
int main(){
    int month,day;
    scanf("%d\n",&month);
    scanf("%d",&day);
    if(month>2){
        puts("After");
    }else if(month==1){
        puts("Before");
    }else{
        if(day>18){
            puts("After");
        }else if(day<18){
            puts("Before");
        }else{
            puts("Special");
        }
    }
}
