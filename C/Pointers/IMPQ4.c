#include <stdio.h>

void sumandavg(int a, int b, int *sum, float *avg){
    *sum = a+b;
    *avg = (float)(*sum)/2;
}
int main(){
    int i=3,j=6,sum;
    float avg;
    sumandavg(i,j,&sum,&avg);
    printf("The sum of i and j is %d\n", sum);
    printf("The avg of i and j is %f\n", avg);
    return 0;
}
//yaha hum ne pointer ki help se ek void function se value return karwali