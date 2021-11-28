#include "array.h"
#include <stdlib.h>

// <>到系统去找头文件 “”到同级目录找头文件

Array array_create(int init_size){
    Array a;
    a.size = init_size;
    a.array = (int*)malloc(sizeof(int)*a.size);
    return a;
}

void array_free(Array* a){
    free(a->array);
    a->array = NULL;
    a->size = 0;
}

int* array_at(Array* a, int index){
    return &(a->array[index]);
}

int array_size(Array *a){
    return a->size;
}

int array_get(const Array* a, int index){
    return a->array[index];
}

void array_set(Array* a, int index, int num){
    a->array[index] = num;
}

void array_inflate(Array* a, int more_size){
    int* p = (int*)malloc(sizeof(int)*(a->size+more_size));
    for(int i = 0; i < a->size; i++){
        p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
}