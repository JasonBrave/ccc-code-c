#include <stdio.h>
int main(){
    int n,i,a,b,as=100,bs=100;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        if(i!=n-1){
            scanf("%d %d\n",&a,&b);
        }else{
            scanf("%d %d",&a,&b);
        }
        if(a>b){
            bs-=a;
        }else if(b>a){
            as-=b;
        }
    }
    printf("%d\n%d\n",as,bs);
    return 0;
}
