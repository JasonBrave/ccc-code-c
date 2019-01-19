#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d",&c);
    if(((a>b)&&(b>c))||((c>b)&&(b>a))){
        printf("%d\n",b);
    }else if(((c>a)&&(a>b))||((b>a)&&(a>c))){
        printf("%d\n",a);
    }else{
        printf("%d\n",c);
    }
    return 0;
}
