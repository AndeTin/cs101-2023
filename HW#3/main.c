#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//宣告結構
typedef struct lottoa{
    int num[5];
    int a[7],b[7],c[7],d[7],e[7];
}lotto;

//初始化程式
static int init(lotto* f){
    for(int i=0;i<5;i++){
        f->num[i]=0;
    }
    for(int i=0;i<7;i++){
        f->a[i]=0;
        f->b[i]=0;
        f->c[i]=0;
        f->d[i]=0;
        f->e[i]=0;
    }
    return 0;
}

int main(){

    //宣告變數
    time_t curtime;
    time(&curtime);
    srand(curtime);
    char title[]= "======== lotto666 ========\n";
    lotto p;


    //初始化
    init(&p);
    
    //printf("%d %d %d %d %d",p.num[0],p.num[1],p.num[2],p.num[3],p.num[4],p.num[5]);


    //接受輸入的數字
    int n;
    printf("welcome歡迎光臨長庚樂透購買機台\n""請問您要買幾組樂透彩：");
    scanf("%d[0 - 5]",&n);
    if(n>5 || n<=0){
        printf("您的輸入有誤，請重新輸入");
        return 0;
    }


    //接受輸入的數字後開始亂數產生並且排序
    for(int i=0;i<n;i++){
        if(p.a[0]==0){
            for(int j=0;j<6;j++){
                p.a[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(p.a[k]>p.a[k+1]){
                    tmp=p.a[k];
                    p.a[k]=p.a[k+1];
                    p.a[k+1]=tmp;
                }
            }
            p.a[6]=rand()%9+1;
            continue;
        }
        else if(p.b[0]==0){
            for(int j=0;j<6;j++){
                p.b[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(p.b[k]>p.b[k+1]){
                    tmp=p.b[k];
                    p.b[k]=p.b[k+1];
                    p.b[k+1]=tmp;
                }
            }
            p.b[6]=rand()%9+1;
            continue;
        }
        else if(p.c[0]==0){
            for(int j=0;j<6;j++){
                p.c[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(p.c[k]>p.c[k+1]){
                    tmp=p.c[k];
                    p.c[k]=p.c[k+1];
                    p.c[k+1]=tmp;
                }
            }
            p.c[6]=rand()%9+1;
            continue;
        }
        else if(p.d[0]==0){
            for(int j=0;j<6;j++){
                p.d[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(p.d[k]>p.d[k+1]){
                    tmp=p.d[k];
                    p.d[k]=p.d[k+1];
                    p.d[k+1]=tmp;
                }
            }
            p.d[6]=rand()%9+1;
            continue;
        }
        else if(p.e[0]==0){
            for(int j=0;j<6;j++){
                p.e[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(p.e[k]>p.e[k+1]){
                    tmp=p.e[k];
                    p.e[k]=p.e[k+1];
                    p.e[k+1]=tmp;
                }
            }
            p.e[6]=rand()%9+1;
            continue;
        }
    }

    
    //開始輸出
    FILE* fp = fopen("lotto.txt","w+");
    
    fprintf(fp, "%s"
                "=======+ No.%d +========\n"
                "%s"
                "[1]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[2]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[3]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[4]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[5]:%02d %02d %02d %02d %02d %02d %02d\n",title,p.num,ctime(&curtime),p.a,p.b,p.c,p.d,p.e);
    fclose(fp);
    printf("已為您購買的 %d 組樂透書出至lotto.txt\n",n);

}