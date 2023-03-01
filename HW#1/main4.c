#include<stdio.h>

int main(){
    char a[]="-99acbc";
    char b[]="99acbc";
    char c[]="ac-99bc";
    char A[3],B[3],C[3];
    int index=0;
    for(int i=0;i<(int)sizeof(a);i++){
        if(a[i]>='-'&&a[i]<='9'){
           printf("%c",a[i]);
        }
    }
    printf("\n");
    for(int i=0;i<(int)sizeof(b);i++){
        if(b[i]>='-'&&b[i]<='9'){
           printf("%c",b[i]);
        }
    }
    printf("\n");
    for(int i=0;i<(int)sizeof(c);i++){
        if(c[i]>='-'&&c[i]<='9'){
           printf("%c",c[i]);
        }
    }
}