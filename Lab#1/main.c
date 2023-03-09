#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* fp;
    int a[]={1,2,3};
    fp=fopen("a.bin","wb+");
    fwrite(a,sizeof(int),1,fp);
    fseek(fp,0,SEEK_SET);
    fclose(fp);
}