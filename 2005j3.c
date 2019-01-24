#include <stdio.h>
#include <string.h>
int main(){
    char inst[10][20];
    int i;
    for(i=0;;i++){
        fgets(inst[i],20,stdin);
        strtok(inst[i],"\n");
        if(strcmp(inst[i],"SCHOOL")==0){
            break;
        }
    }
    i--;
    for(;i>0;i=i-2){
        if(inst[i][0]=='R'){
            printf("Turn LEFT onto %s street.\n",inst[i-1]);
        }else{
            printf("Turn RIGHT onto %s street.\n",inst[i-1]);
        }
    }
    if(inst[0][0]=='R'){
        printf("Turn LEFT into your HOME.\n");
    }else{
        printf("Turn RIGHT into your HOME.\n");
    }
    return 0;
}
