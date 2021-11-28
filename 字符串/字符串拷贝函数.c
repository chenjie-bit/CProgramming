#include <stdio.h>
#include <string.h>

char* my_cpy(char* dst, const char* src){

    char* ret = *dst;
    while (*dst++ = *src++) 
    *dst = '\0';
    return ret;
}


int main(){
    char s1[] = "abc";
    char s2[] = "bcd";

    my_cpy(s2, s1);
    printf("%s", s2);
    return 0;
}