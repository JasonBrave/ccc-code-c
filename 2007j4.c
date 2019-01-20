#include <stdio.h>
#include <string.h>
void rearrange(char str[]);
int main(){
    char a[20],b[20];
    int i,ii;
    printf("Enter first phrase>");
    fgets(a,20,stdin);
    printf("Enter second phrase>");
    fgets(b,20,stdin);
    rearrange(a);
    rearrange(b);
    if(strlen(a)==strlen(b)){
        for(i=0;i<strlen(a);i++){
            for(ii=0;ii<=strlen(a);ii++){
                if(a[i]==b[ii]){
                    b[ii]=0;
                    break;
                }
            }
        }
        for(i=0;i<=strlen(a);i++){
            if(b[i]!=0){
                puts("Is not an anagram.");
                return 0;;
            }
        }
        puts("Is an anagram.");
    }else{
        puts("Is not an anagram.");
    }
    return 0;
}

void rearrange(char str[]){
    int i,m=0;
    for(i=0;str[i]!='\n';i++){
        if(str[i]==' '){
            m++;
            continue;
        }
        str[i-m]=str[i];
    }
    str[i-m]='\0';
}
