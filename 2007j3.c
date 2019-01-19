#include <stdio.h>
int main(){
    int val[11]={0,100,500,1000,5000,10000,25000,50000,100000,500000,1000000};
    int offer,cases,elim,total=0,i,size=10;
    scanf("%d\n",&cases);
    for(i=1;i<=cases;i++){
        scanf("%d\n",&elim);
        val[elim]=0;
        size--;
    }
    for(i=1;i<=10;i++){
        total+=val[i];
    }
    scanf("%d",&offer);
    if((total/size)>offer){
        puts("no deal");
    }else{
        puts("deal");
    }
    return 0;
}
