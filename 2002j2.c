#include <stdio.h>
#include <string.h>
int main(){
    char str[68];
    puts("Enter words to be translated:");
    while(1){
        fgets(str,68,stdin);
        strtok(str,"\n");
        if(strcmp(str,"quit!")==0){
            return 0;
        }
        if(strlen(str)>4){
            if(strcmp(str+strlen(str)-2,"or")==0){
                if((str[strlen(str)-3]!='a')&&(str[strlen(str)-3]!='e')&&(str[strlen(str)-3]!='i')&&(str[strlen(str)-3]!='o')&&(str[strlen(str)-3]!='u')&&(str[strlen(str)-3]!='y')){
                    str[strlen(str)-1]='u';
                    str[strlen(str)]='r';
                    str[strlen(str)+1]='\n';
                    puts(str);
                    continue;
                }
            }
        }
        puts(str);
    }
}
