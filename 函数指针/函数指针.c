#include <stdio.h>

void f(int i){

    printf("This is func f: %d\n", i);
}

int main(){

    void (*pf)(int) = f;
    f(10);
    (*pf)(20);
    printf("main函数的地址是：%p\n", main);
    return 0;
}