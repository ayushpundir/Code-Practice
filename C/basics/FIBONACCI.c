#include <stdio.h>

int main(){
    int first=0,second=1,sum=0,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(i<=1){
            sum=i;
        }
        else{
            sum = first + second;
            first=second ;
            second=sum;
        }
        printf(" %d", sum);
    }
    return 0;
}