#include<stdio.h>
    
int main(){
    char a[]={-9,8,7,6,5,-4,3,-2,1};
    int i=4,t;
    for(int j=0;j<8;j++){
        if(a[8-j]>a[7-j]){
            t=a[8-j];
            a[8-j]=a[7-j];
            a[7-j]=t;
        }
    }
    printf("%d",a[i]);
}