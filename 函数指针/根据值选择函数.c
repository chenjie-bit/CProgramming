#include <stdio.h>

void f(int i){

    printf("In func f: %d\n", i);
}

void g(int i){

    printf("In func g: %d\n", i);
}

void h(int i){

    printf("In func h: %d\n", i);
}

int main(){

    int i = 0;
    void (*fa[])(int) = {f, g, h};
    scanf("%d", &i);

    if( i>=0 && i<sizeof(fa)/sizeof(fa[0])){

        (*fa[i])(0);
    }else {
        printf("-----\n");
    }


    // if(i==0){
    //     g(0);
    // }else if(i==1){
    //     f(0);
    // }

    return 0;
}