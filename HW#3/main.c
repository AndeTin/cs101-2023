#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//�ŧi���c
typedef struct lottoa{
    int num[5];
    int a[7],b[7],c[7],d[7],e[7];
}lotto;

//��l�Ƶ{��
void init(lotto* p){
    for(int i=0;i<5;i++){
        p->num[i]=0;
    }
    for(int i=0;i<7;i++){
        p->a[i]=0;
        p->b[i]=0;
        p->c[i]=0;
        p->d[i]=0;
        p->e[i]=0;
    }
}

int main(){

    //�ŧi�ܼ�
    time_t curtime;
    time(&curtime);
    srand(curtime);
    char title[]= "======== lotto666 ========\n";
    lotto f;
    lotto* p=&f;


    //��l��
    init(p);


    //������J���Ʀr
    int n;
    printf("welcome�w����{�����ֳz�ʶR���x\n""�аݱz�n�R�X�ռֳz�m�G");
    scanf("%d[0 - 5]",&n);
    if(n>5 || n<=0){
        printf("�z����J���~�A�Э��s��J");
        return 0;
    }


    //������J���Ʀr��}�l�üƲ��ͨåB�Ƨ�
    for(int i=0;i<n;i++){
        if(p->a[0]==0){
            for(int j=0;j<6;j++){
                p->a[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(p->a[k]>p->a[k+1]){
                    tmp=p->a[k];
                    p->a[k]=p->a[k+1];
                    p->a[k+1]=tmp;
                }
            }
            p->a[6]=rand()%9+1;
            continue;
        }
        else if(p->b[0]==0){
            for(int j=0;j<6;j++){
                p->b[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(p->b[k]>p->b[k+1]){
                    tmp=p->b[k];
                    p->b[k]=p->b[k+1];
                    p->b[k+1]=tmp;
                }
            }
            p->b[6]=rand()%9+1;
            continue;
        }
        else if(p->c[0]==0){
            for(int j=0;j<6;j++){
                p->c[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(p->c[k]>p->c[k+1]){
                    tmp=p->c[k];
                    p->c[k]=p->c[k+1];
                    p->c[k+1]=tmp;
                }
            }
            p->c[6]=rand()%9+1;
            continue;
        }
        else if(p->d[0]==0){
            for(int j=0;j<6;j++){
                p->d[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(p->d[k]>p->d[k+1]){
                    tmp=p->d[k];
                    p->d[k]=p->d[k+1];
                    p->d[k+1]=tmp;
                }
            }
            p->d[6]=rand()%9+1;
            continue;
        }
        else if(p->e[0]==0){
            for(int j=0;j<6;j++){
                p->e[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                if(p->e[k]>p->e[k+1]){
                    tmp=p->e[k];
                    p->e[k]=p->e[k+1];
                    p->e[k+1]=tmp;
                }
            }
            p->e[6]=rand()%9+1;
            continue;
        }
    }

    
    //�}�l��X
    FILE* fp = fopen("lotto.txt","w+");
    
    fprintf(fp, "%s"
                "========+ No.%d +========\n"
                "%s"
                "[1]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[2]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[3]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[4]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[5]:%02d %02d %02d %02d %02d %02d %02d\n",title,p->num,ctime(&curtime),p->a,p->b,p->c,p->d,p->e);
    fclose(fp);
    printf("�w���z�ʶR�� %d �ռֳz�ѥX��lotto.txt\n",n);

}