#include <stdio.h>
#include <string.h>
char encode(char e,int s);
char keyword[8];
int main(){
    char strin[62];
    int keylen,i,offset=0;
    fgets(keyword,8,stdin);
    keylen=strlen(keyword)-1;
    fgets(strin,62,stdin);
    for(i=0;strin[i+offset]!='\n';i++){
        if(!((strin[i+offset]>='A')&&(strin[i+offset]<='Z'))){
            offset++;
            i--;
            continue;
        }
        strin[i]=encode(strin[i+offset],i%keylen);
    }
    strin[i]='\0';
    puts(strin);
    return 0;
}

char encode(char e,int s){
    e=e+(keyword[s]-'A');
    if(e>'Z'){
        e-=26;
    }
    return e;
}
