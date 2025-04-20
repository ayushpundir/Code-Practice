#include <stdio.h>

int sum(int n);
int main(){
     int x= sum(10);
    printf("The of sum of first n natural numbers=%d", x);
    return 0;
}
int sum(int n){
    if (n==1){
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}