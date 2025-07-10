#include <stdio.h>
#include <stdlib.h>//maclloc is under stdlib.h


int main(){
    float *ptr;
    //ptr=malloc(6*sizeof(int));//here sizeof operator will give the size of int in my pc
    //malloc returns a void pointer so we have to typecast it
    ptr=(float *)malloc(5*sizeof(float));
    for(int i=0;i<6;i++){
        printf("Enter the value of %d element: ", i);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("The value of %d element is %f\n", i, ptr[i]);
    }
    return 0;
}