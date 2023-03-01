#include<stdio.h>

int main(){
    char a[]="AABBBCCCCddd";
    int index=0;
    for(int i=0;i<(int)sizeof(a);i++){
        if(a[i]>='A' && a[i]<='z'){
            if(a[i]==a[i+1] && i+1<=(int)sizeof(a)){
                index++;
            }
            else{
                printf("%c%d",a[i],index+1);
                index=0;
            }
        }
    }
}