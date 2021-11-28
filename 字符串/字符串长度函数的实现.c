#include <stdio.h>
#include <string.h>


int my_len(char *s){
    int cnt = 0;

    while(*s++){
        cnt++;
    }
    return cnt;
}

int main(){

    char line[] = "hello";

    printf("strlen = %lu\n", strlen(line));
    printf("sizoof = %lu\n", sizeof(line));
    printf("mylen = %d\n", my_len(line));


    return 0;
}