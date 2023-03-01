#include<stdio.h>

int main(){
    char a[]="Hello";
    char b[6]={0,0,0,0,0,0};
    int t;
    for(int i=0;i<5;i++){
        b[i]=a[4-i];
    }
    t=b[0];
    b[0]=t-32;
    t=b[4];
    b[4]=t+32;
    printf("%s\n",b);
}