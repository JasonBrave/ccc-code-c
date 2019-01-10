#include <stdio.h>
int checkok(char letter);
int main(){
    char theword[30];
    int i,ok=1;
    fgets(theword,30,stdin);
    for(i=0;theword[i]!='\n';i++){
        if(checkok(theword[i])==0){
            ok=0;
        }
    }
    if(ok){
        puts("YES");
    }else{
        puts("NO");
    }
    return 0;
}

int checkok(char letter){
    int i;
    char okletter[8]="IOSHZXN";
    for(i=0;i<8;i++){
        if(letter==okletter[i]){
            return 1;
        }
    }
    return 0;
}
