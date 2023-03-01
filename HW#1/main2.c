#include<stdio.h>
int main(){
    char a[9]="A3B2C4D9";
    for(int i=0;i<(int)sizeof(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
            for(int j=0;j<a[i+1]-'0';j++){
                printf("%c",a[i]);
            }
        }
    }
}