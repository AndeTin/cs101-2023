#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){
    int n;
    char arr_1[]={0,0,0,0,0,0},arr_2[]={0,0,0,0,0,0},arr_3[]={0,0,0,0,0,0},arr_4[]={0,0,0,0,0,0},arr_5[]={0,0,0,0,0,0};
    time_t curtime;
    time(&curtime);
    printf("歡迎光臨長庚樂透購買機台\n""請問您要買幾組樂透彩：");
    scanf("%d",&n);
    while(n<1 || n>5){
        printf("請輸入1~5之間的數字");
        scanf("%d",&n);
    }   
    for(int i=1;i<=n;i++){
        
    }

    printf("======== lotto666 ========\n"
           "= %s =\n"
           "[1]:%02d\n"
           "[2]:%02d\n"
           "[3]:%02d\n"
           "[4]:%02d\n"
           "[5]:%02d\n", ctime(&curtime),arr_1,arr_2,arr_3,arr_4,arr_5);
}