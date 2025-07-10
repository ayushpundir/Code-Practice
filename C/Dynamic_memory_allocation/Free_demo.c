#include <stdio.h>
#include <stdlib.h>//maclloc is under stdlib.h


int main(){
    int *ptr;
    int *ptr2;
    //ptr=malloc(6*sizeof(int));//here sizeof operator will give the size of int in my pc
    //malloc returns a void pointer so we have to typecast it
    ptr=(int *)malloc(600*sizeof(int));
    for(int i=0;i<6000;i++){
        ptr2=(int *)malloc(600000*sizeof(int));
        printf("Enter the value of %d element: ", i);
        scanf("%d",&ptr[i]);
        free(ptr2);//agar ye use nhi kiya toh ye bhut memory lega
    }
    for(int i=0;i<6;i++){
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    return 0;
}