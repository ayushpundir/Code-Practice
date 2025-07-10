#include <stdio.h>
#include <stdlib.h>//maclloc is under stdlib.h


int main(){
    int *ptr;
    //ptr=malloc(6*sizeof(int));//here sizeof operator will give the size of int in my pc
    //malloc returns a void pointer so we have to typecast it
    ptr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<6;i++){
        printf("Enter the value of %d element: ", i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    //reallocate ptr using realloc()
    ptr =realloc(ptr, 10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("Enter the value of %d element: ", i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    return 0;
}