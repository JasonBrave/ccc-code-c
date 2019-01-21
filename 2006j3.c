#include <stdio.h>
#include <string.h>
int keyid(char key,int *n);
int main(){
    char str[22];
    int thetime=0,i,n,kid;
    int times[10],l;
    for(l=0;;l++){
        thetime=0;
        fgets(str,22,stdin);
        if(strcmp(str,"halt\n")==0){
            break;
        }
        kid=keyid(str[0],&n);
        thetime+=n;
        for(i=1;str[i]!='\n';i++){
            kid=keyid(str[i],&n);
            thetime+=n;
            if(kid==keyid(str[i-1],&n)){
                thetime+=2;
            }
        }
        times[l]=thetime;
    }
    for(i=0;i<l;i++){
        printf("%d\n",times[i]);
    }
    return 0;
}

int keyid(char key,int *n){
    int privous=1,kid=1;
    char i;
    int keymap[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    *n=0;
    for(i=0;i<=key-'a';i++){
        if(keymap[i]!=privous){
            kid++;
            *n=0;
        }
        (*n)++;
        privous=keymap[i];
    }
    return kid;
}
