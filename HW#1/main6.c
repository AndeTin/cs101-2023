#include<stdio.h>

int main(){
    char a[]="81c8g8u168";
    for(int i=0;i<10;i++){
        if(a[i]>='0'&& a[i]<='9'){
            if(a[i]=='1'){
                printf("I ");
            }
            if(a[i]=='2'){
                printf("II ");
            }
            if(a[i]=='3'){
                printf("III ");
            }
            if(a[i]=='4'){
                printf("IV ");
            }
            if(a[i]=='5'){
                printf("V ");
            }
            if(a[i]=='6'){
                printf("VI ");
            }
            if(a[i]=='7'){
                printf("VII ");
            }
            if(a[i]=='8'){
                printf("VIII ");
            }
            if(a[i]=='9'){
                printf("IX ");
            }
        }
        else{
            printf("%c ",a[i]);
        }
    }
}