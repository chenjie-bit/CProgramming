#include <stdio.h>

struct point{
    int x,y;
};

struct point GetPoint(void){
    struct point p;
    scanf("%d %d", &p.x, &p.y);
    return p;
}

int main(){
    struct point y = {0, 0};
    y = GetPoint();
    printf("%d %d\n", y.x, y.y);


    return 0;
}