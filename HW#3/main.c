#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//�ŧi���c
typedef struct lottoa{
    int num;
    int a[7],b[7],c[7],d[7],e[7];
}lotto;

//��l�Ƶ{��
static int init(lotto* f){
    f->num=1;
    for(int i=0;i<7;i++){
        f->a[i]=0;
        f->b[i]=0;
        f->c[i]=0;
        f->d[i]=0;
        f->e[i]=0;
    }
    return 0;
}
//��o���{��
void lottery(int p){
    int jackpot[3]={0};
    printf("�п�J�����T�X�G");
    scanf("%d %d %d",&jackpot[0],&jackpot[1],&jackpot[2]);
    FILE* rc = fopen("record.bin","r+");
}

int main(){

    //�ŧi�ܼ�
    time_t curtime;
    time(&curtime);
    srand(curtime);
    char title[]= "======== lotto666 ========\n";
    lotto p;


    //��l��
    init(&p);


    //������J���Ʀr
    int n;
    printf("welcome�w����{�����ֳz�ʶR���x\n""�аݱz�n�R�X�ռֳz�m�G");
    scanf("%d[0 - 5]",&n);
    if(n>5 || n<0){
        printf("�z����J���~�A�Э��s��J");
        return 0;
    }


    //������J���Ʀr��}�l�üƲ��ͨåB�Ƨ�
    for(int i=0;i<n;i++){
        if(p.a[0]==0){
            for(int j=0;j<6;j++){
                p.a[j]=rand()%49+1;
            }
            for(int k=0 , tmp ;k<5;k++){
                for(int l=0;l<5;l++){
                    if(p.a[l]>p.a[l+1]){
                        tmp=p.a[l];
                        p.a[l]=p.a[l+1];
                        p.a[l+1]=tmp;
                    }
                }
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
                for(int l=0;l<5;l++){
                    if(p.b[l]>p.b[l+1]){
                        tmp=p.b[l];
                        p.b[l]=p.b[l+1];
                        p.b[l+1]=tmp;
                    }
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
                 for(int l=0;l<5;l++){
                    if(p.c[l]>p.c[l+1]){
                        tmp=p.c[l];
                        p.c[l]=p.c[l+1];
                        p.c[l+1]=tmp;
                    }
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
                for(int l=0;l<5;l++){
                    if(p.d[l]>p.d[l+1]){
                        tmp=p.d[l];
                        p.d[l]=p.d[l+1];
                        p.d[l+1]=tmp;
                    }
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
                for(int l=0;l<5;l++){
                    if(p.e[l]>p.e[l+1]){
                        tmp=p.e[l];
                        p.e[l]=p.e[l+1];
                        p.e[l+1]=tmp;
                    }
                
                }
            }
            p.e[6]=rand()%9+1;
            continue;
        }
    

    //�R�W�ɮ�
    char name[20];
    lotto note;
    rc = fopen("record.bin","r+");
    while(fread(&note, sizeof(lotto), 1, rc)){
        p.num++;
    }
    fclose(rc);
    sprintf(name,"lotto%05d.txt",p.num);

    //�}�l��X�ɮ�
    FILE* fp = fopen(name,"w+");

    fprintf(fp, "%s"
                "=======+ No.%05d +=====\n"
                "%s"
                "[1]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[2]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[3]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[4]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[5]:%02d %02d %02d %02d %02d %02d %02d\n"  ,title,p.num,ctime(&curtime)
                                                            ,p.a[0],p.a[1],p.a[2],p.a[3],p.a[4],p.a[5],p.a[6]
                                                            ,p.b[0],p.b[1],p.b[2],p.b[3],p.b[4],p.b[5],p.b[6]
                                                            ,p.c[0],p.c[1],p.c[2],p.c[3],p.c[4],p.c[5],p.c[6]
                                                            ,p.d[0],p.d[1],p.d[2],p.d[3],p.d[4],p.d[5],p.d[6]
                                                            ,p.e[0],p.e[1],p.e[2],p.e[3],p.e[4],p.e[5],p.e[6]);
    fclose(fp);
    
    //�}�l��Xrecord.bin
    rc = fopen("record.bin","ab+");
    fprintf(rc, "%s"
                "=======+ No.%05d +=====\n"
                "%s"
                "[1]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[2]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[3]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[4]:%02d %02d %02d %02d %02d %02d %02d\n"
                "[5]:%02d %02d %02d %02d %02d %02d %02d\n",title,p.num,ctime(&curtime)
                                                            ,p.a[0],p.a[1],p.a[2],p.a[3],p.a[4],p.a[5],p.a[6]
                                                            ,p.b[0],p.b[1],p.b[2],p.b[3],p.b[4],p.b[5],p.b[6]
                                                            ,p.c[0],p.c[1],p.c[2],p.c[3],p.c[4],p.c[5],p.c[6]
                                                            ,p.d[0],p.d[1],p.d[2],p.d[3],p.d[4],p.d[5],p.d[6]
                                                            ,p.e[0],p.e[1],p.e[2],p.e[3],p.e[4],p.e[5],p.e[6]);
    fclose(rc);

    printf("�w���z�ʶR�� %d �ռֳz�ѥX��lotto.txt\n",n);
    return 0;
}