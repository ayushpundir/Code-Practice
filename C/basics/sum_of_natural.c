// #include <stdio.h>

// int main(){
//     int i = 1,sum;//we have not given any value of SUM hence compiler 
//     while(i<=10){ //will consider it to be zero.
//         sum += i;
//         i++;
//     }
//     printf("%d",sum);
//     return 0;
// }
#include <stdio.h>

int main(){
    int i=1,sum;
    do{
        sum+=i;
        i++;
    }while(i<=10);
    printf("%d", sum);
    return 0;
}