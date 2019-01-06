#include <stdio.h>
int main(){
    int v,i,a=0,b=0;
    char str[20];
    scanf("%d\n",&v);
    fgets(str,20,stdin);
    for(i=0;i<v;i++){
        if(str[i]=='A'){
            a++;
        }else{
            b++;
        }
    }
    if(a>b){
        puts("A");
    }else if(b>a){
        puts("B");
    }else{
        puts("Tie");
    }
    return 0;
}
