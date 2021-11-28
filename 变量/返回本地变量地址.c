//返回本地变量的地址是一种危险行为
#include <stdio.h>

int* f(void);

void g(void);

int main(){

    int* p = f();
    printf("*p = %d\n", *p);

    g();
    printf("*p = %d\n", *p);

    return 0;
}

int* f(void){

    int a = 0;
    return &a;
}

void g(void){

    int b = 1;
    printf("b = %d\n", b);
}