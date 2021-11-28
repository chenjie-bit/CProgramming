//静态变量是一种特殊的全局变量

#include <stdio.h>

int gAll = 12;
void f(void);
void k(void);

int main(){

    f();
    k();
    k();
    return 0;
}

void f(void){

    static int all = 10;
    printf("gAll的地址是：%p\n", &gAll);
    printf("all的地址是：%p\n", &all);
}

void k(void){

    static int a = 0;
    a++;
    printf("a = %d\n", a);
}