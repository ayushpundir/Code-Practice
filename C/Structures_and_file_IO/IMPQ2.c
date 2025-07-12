#include <stdio.h>

struct vector{
int x;
int y;
};
struct vector vectorsum(struct vector v, struct vector r){
    struct vector result;
    result.x=v.x+r.x;
    result.y=v.y+r.y;
    return result;
}
int main(){
    struct vector v1,v2,sum;

    v1.x=24;
    v1.y=43;

    v2.x=17;
    v2.y=95;

    sum = vectorsum(v1,v2);
    printf("X dim of result is %d and Y dim is %d", sum.x,sum.y);
    return 0;
}