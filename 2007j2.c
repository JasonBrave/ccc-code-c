#include <stdio.h>
#include <string.h>
int main(){
    char text[20];
    while(1){
        printf("Enter phrase>");
        fgets(text,20,stdin);
        if(strcmp(text,"CU\n")==0){
            puts("see you");
        }else if(strcmp(text,":-)\n")==0){
            puts("I’m happy");
        }else if(strcmp(text,":-(\n")==0){
            puts("I’m unhappy");
        }else if(strcmp(text,";-)\n")==0){
            puts("wink");
        }else if(strcmp(text,":-P\n")==0){
            puts("stick out my tongue");
        }else if(strcmp(text,"(˜.˜)\n")==0){
            puts("sleepy");
        }else if(strcmp(text,"TA\n")==0){
            puts("totally awesome");
        }else if(strcmp(text,"CCC\n")==0){
            puts("Canadian Computing Competition");
        }else if(strcmp(text,"CUZ\n")==0){
            puts("because");
        }else if(strcmp(text,"TY\n")==0){
            puts("thank you");
        }else if(strcmp(text,"YW\n")==0){
            puts("you’re welcome");
        }else if(strcmp(text,"TTYL\n")==0){
            puts("talk to you later");
            return 0;
        }else{
            printf(text);
        }
    }
}
