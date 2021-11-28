#include <stdio.h>
#include <string.h>

int main(){

    //目标字符串必须有长度
    char s1[10] = "abc";
    char s2[] = "def";
    strcat(s1, s2);
    printf("%s\n", s1);

    return 0;
}