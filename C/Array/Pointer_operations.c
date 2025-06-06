#include <stdio.h>

int main(){
    int i=65;
    int *ptr=&i;
    printf("The value of ptr %u\n",ptr);
    ptr++;//or ptr=ptr+1;
    printf("The new value of ptr %u\n",ptr);

    int j=56;
    int *ptrj=&j;
    printf("The value of ptrj %u\n",ptrj);
    ptrj--;//or ptrj=ptrj-1;
    printf("The new value of ptrj %u\n",ptrj);
    
    //Difference and comparison bhi kar sakte ha

    return 0;
}