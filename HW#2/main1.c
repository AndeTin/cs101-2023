#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    time_t curtime;
    time(&curtime);
    char title[]= "======== lotto666 ========\n";
    int a[6]={0},b[6]={0},c[6]={0},d[6]={0},e[6]={0},num=0;

    int n;
    printf("welcome歡迎光臨長庚樂透購買機台\n""請問您要買幾組樂透彩：");
    scanf("%d[0 - 5]",&n);
    //接受輸入的數字後開始亂數產生並且排序
    for(int i=0;i<n;i++){
        if(a[0]==0){
            for(int j=0;j<6;j++){
                a[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(a[k]>a[k+1]){
                    tmp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=tmp;
                }
            }
            continue;
        }
        else if(b[0]==0){
            for(int j=0;j<6;j++){
                b[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(b[k]>b[k+1]){
                    tmp=b[k];
                    b[k]=b[k+1];
                    b[k+1]=tmp;
                }
            }
            continue;
        }
        else if(c[0]==0){
            for(int j=0;j<6;j++){
                c[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(c[k]>c[k+1]){
                    tmp=c[k];
                    c[k]=c[k+1];
                    c[k+1]=tmp;
                }
            }
            continue;
        }
        else if(d[0]==0){
            for(int j=0;j<6;j++){
                d[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(d[k]>d[k+1]){
                    tmp=d[k];
                    d[k]=d[k+1];
                    d[k+1]=tmp;
                }
            }
            continue;
        }
        else if(e[0]==0){
            for(int j=0;j<6;j++){
                e[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(e[k]>e[k+1]){
                    tmp=e[k];
                    e[k]=e[k+1];
                    e[k+1]=tmp;
                }
            }
            continue;
        }
    }
    //開始輸出
    FILE* fp = fopen("lotto.txt","w+");
    fprintf(fp, "%s"
                "%s"
                "[1]:%02d %02d %02d %02d %02d %02d\n"
                "[2]:%02d %02d %02d %02d %02d %02d\n"
                "[3]:%02d %02d %02d %02d %02d %02d\n"
                "[4]:%02d %02d %02d %02d %02d %02d\n"
                "[5]:%02d %02d %02d %02d %02d %02d\n",title,ctime(&curtime),a[0],a[1],a[2],a[3],a[4],a[5],b[0],b[1],b[2],b[3],b[4],b[5],c[0],c[1],c[2],c[3],c[4],c[5],d[0],d[1],d[2],d[3],d[4],d[5],e[0],e[1],e[2],e[3],e[4],e[5]);
    fclose(fp);
    printf("已為您購買的 %d 組樂透書出至lotto.txt\n",n);

}