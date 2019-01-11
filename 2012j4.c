#include <stdio.h>
char changeletter(int seq,char letter);
int k;
int main(){
    char str[22];
    int i;
    scanf("%d\n",&k);
    fgets(str,22,stdin);
    for(i=0;str[i]!='\n';i++){
        str[i]=changeletter(i+1,str[i]);
    }
    printf(str);
    return 0;
}

char changeletter(int seq,char letter){
    letter=letter-3*seq-k;
    if(letter<'A'){
        letter=letter+26;
    }
    return letter;
}
