#include<stdio.h>

void func(int m,int n){
    printf("%d * %d = %d\t",m,n,m*n);
    if(n<9){
        return func(m,n+1);
    }
    if(n==9 && m<9){
        n=1;
        printf("\n");
        return func(m+1,n);
    }
}

int main(){
    func(1,1);
    return 0;
}