#include <stdio.h>
int main(){
    int n,i,ok=0;
    int h,min;
    char a,b,c,d;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        min=i%60;
        h=12+(i/60);
        h=h%12;
        h=(h==0)?12:h;
        a=h/10;
        b=h%10;
        c=min/10;
        d=min%10;
        if(a==0){
            if((b-c)==(c-d)){
                ok++;
            }
        }else{
            if(((a-b)==(b-c))&&((b-c)==(c-d))){
                ok++;
            }
        }
    }
    printf("%d\n",ok);
}
