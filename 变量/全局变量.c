#include <stdio.h>

int gAll = 12;
int f(void);
int main(){

    printf("%s中gAll的值是:%d\n", __func__, gAll);
    f();
    printf("调用f()后, %s中gAll的值是:%d\n", __func__, gAll);
    return 0;
}

int f(void){

    printf("%s中gAll的值是:%d\n", __func__, gAll);
    gAll++;
    printf("agn: %s中gAll的值是:%d\n", __func__, gAll);
    return gAll;
}