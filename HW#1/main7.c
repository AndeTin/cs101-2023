#include<stdio.h>

int main(){
    char a[]="10001111";
    char b[]="10011110";
    int A=0,B=0,t=1;
    for(int i=0;i<8;i++){
        if(a[i]=='1'){
            for(int j=0;j<7-i;j++){
                t*=2;
            }
            A+=t;
            t=1;
        }
    }
    for(int i=0;i<8;i++){
        if(b[i]=='1'){
            for(int j=0;j<7-i;j++){
                t*=2;
            }
            B+=t;
            t=1;
        }
    }
    printf("%x\n%x",A,B);
}