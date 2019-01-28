#include <stdio.h>
int main(){
    int p,i;
    puts("Enter number of pictures:");
    scanf("%d",&p);
    if(p!=0){
        for(i=1;i<=p;i++){
            if(p%i==0){
                if(i>=(p/i)){
                    break;
                }
            }
        }
    }else{
        return 0;
    }
    printf("Minimum perimeter is %d with dimensions %d x %d\n",2*i+2*(p/i),p/i,i);
    return 0;
}
