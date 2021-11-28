#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char s[] = "hello";

    char* p = strchr(s, 'l');//返回一个指向被查找字符的指针
    char* t = (char*)malloc(strlen(p)+1);
    strcpy(t, p);
    printf("%s\n", t);
    free(t);
    
    return 0;
}