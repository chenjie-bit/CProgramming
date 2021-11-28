#include "array.h"
#include <stdio.h>

int main(int argc, const char* argv[]){

    Array a = array_create(100);
    printf("%d", array_size(&a));
    
    return 0;
}