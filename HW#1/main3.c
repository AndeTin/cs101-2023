#include<stdio.h>

int main(){
    char a[]="ABCabcABC";
    int shift=4;
    for(int i=0;i<=8;i++)
    {
        if(shift+i<9){
            printf("%c",a[shift+i]);
        }
        else{
            printf("%c",a[shift+i-9]);
        }
    }
    
}