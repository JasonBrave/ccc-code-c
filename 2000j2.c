#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int l,u,i,ii,r=0,badchar;
    char c[6],cc[6];
    puts("Enter the lower bound of the interval:");
    scanf("%d",&l);
    puts("Enter the upper bound of the interval:");
    scanf("%d",&u);
    puts("The number of rotatable numbers is:");
    for(i=l;i<=u;i++){
        sprintf(c,"%d",i);
        for(ii=0;c[ii]!='\0';ii++){
            cc[ii]=c[strlen(c)-ii-1];
        }
        cc[ii]='\0';
        badchar=0;
        for(ii=0;cc[ii]!='\0';ii++){
            if(cc[ii]=='9'){
                cc[ii]='6';
            }else if(cc[ii]=='6'){
                cc[ii]='9';
            }else if(!((cc[ii]=='0')||(cc[ii]=='1')||(cc[ii]=='8'))){
                badchar=1;
            }
        }
        if(!badchar){
            if(i==atoi(cc)){
                r++;
            }
        }
    }
    printf("%d\n",r);
    return 0;
}
