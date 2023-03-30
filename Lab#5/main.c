#include<stdio.h>
#include<stdlib.h>

typedef int (*func_ptr)(int ,int);

int calc(func_ptr func, int a, int b){
    return func(a,b);
}

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int main(){
    printf("sum = %d\n",calc(add,4,2));
    printf("sub = %d\n",calc(sub,4,2));
    printf("mul = %d\n",calc(mul,4,2));
    printf("div = %d\n",calc(div,4,2));\
    return 0;
}

