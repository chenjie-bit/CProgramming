#include <stdio.h>

typedef union{
    int i;
    char ch[sizeof(int)];
}CHI;

int main(){
    CHI chi;
    chi.i = 1234;
    for(int i = 0; i < sizeof(int); i++){
        printf("%02hhx", chi.ch[i]);
    }

    return 0;
}