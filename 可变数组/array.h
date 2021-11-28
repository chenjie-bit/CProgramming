#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct{
    int* array;
    int size;
}Array;

Array array_create(int init_size);

void array_free(Array* a);

int array_size(Array *a);//封装起来 比直接使用a.size更具有安全性

int* array_at(Array* a, int index);//返回指针 可以当作左值 方便赋值

int array_get(const Array* a, int index);

void array_set(Array* a, int index, int num);

void array_inflate(Array* a, int more_size);

#endif