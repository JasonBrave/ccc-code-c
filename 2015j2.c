#include <stdio.h>
#include <string.h>
int main(){
    char str[257];
    fgets(str,258,stdin);
    int len=strlen(str);
    int i,happy=0,sad=0;
    for(i=0;i<len;i++){
        if((str[i]==':')&&(str[i+1]=='-')){
            if(str[i+2]==')'){
                happy++;
            }else if(str[i+2]=='('){
                sad++;
            }
        }
    }
    if(happy==sad){
        puts("none");
    }else if(happy>sad){
        puts("happy");
    }else{
        puts("sad");
    }
    return 0;
}
