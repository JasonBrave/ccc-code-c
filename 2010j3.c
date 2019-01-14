#include <stdio.h>
#include <stdlib.h>
#define ARGA inst[2]
#define ARGB inst[4]
int main(){
    int a=0,b=0;
    char inst[12];
    while(1){
        fgets(inst,12,stdin);
        switch(inst[0]){
            case '1':
                if(ARGA=='A'){
                    a=atoi(inst+4);
                }else{
                    b=atoi(inst+4);
                }
                break;
            case '2':
                if(ARGA=='A'){
                    printf("%d\n",a);
                }else{
                    printf("%d\n",b);
                }
                break;
            case '3':
                if((ARGA=='A')&&(ARGB=='A')){
                    a=a+a;
                }else if((ARGA=='A')&&(ARGB=='B')){
                    a=a+b;
                }else if((ARGA=='B')&&(ARGB=='A')){
                    b=b+a;
                }else{
                    b=b+b;
                }
                break;
            case '4':
                if((ARGA=='A')&&(ARGB=='A')){
                    a=a*a;
                }else if((ARGA=='A')&&(ARGB=='B')){
                    a=a*b;
                }else if((ARGA=='B')&&(ARGB=='A')){
                    b=b*a;
                }else{
                    b=b*b;
                }
                break;
            case '5':
                if((ARGA=='A')&&(ARGB=='A')){
                    a=a-a;
                }else if((ARGA=='A')&&(ARGB=='B')){
                    a=a-b;
                }else if((ARGA=='B')&&(ARGB=='A')){
                    b=b-a;
                }else{
                    b=b-b;
                }
                break;
            case '6':
                if((ARGA=='A')&&(ARGB=='A')){
                    a=a/a;
                }else if((ARGA=='A')&&(ARGB=='B')){
                    a=a/b;
                }else if((ARGA=='B')&&(ARGB=='A')){
                    b=b/a;
                }else{
                    b=b/b;
                }
                break;
            case '7':
                return 0;
        }
    }
    return 0;
}
