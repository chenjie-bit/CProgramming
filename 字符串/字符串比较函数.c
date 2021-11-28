#include <stdio.h>
#include <string.h>

int my_cmp(const char* s1, const char* s2){
    while(*s1 == *s2 && *s1 != '\0'){
        s1++;
        s2++;
    }
    return *s1-*s2;

}

int main(){
    char s1[] = "abc";
    char s2[] = "abc";

    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", my_cmp(s1, s2));

    return 0;
}