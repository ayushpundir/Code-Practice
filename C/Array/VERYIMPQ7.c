// rockstar way niche is
//  #include <stdio.h>

// int main(){
//     int arr[3][10];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<10;j++){
//             if(i==0){
//             arr[i][j]= 2*(j+1);
//             printf("2X%d=%d\n",j+1,arr[i][j]);
//             }
//             else if(i==1){
//             arr[i][j]= 7*(j+1);
//             printf("7X%d=%d\n",j+1,arr[i][j]);
//             }
//             else{
//             arr[i][j]= 9*(j+1);
//             printf("9X%d=%d\n",j+1,arr[i][j]);
//             }
//         }
//     }
//     return 0;
// }
// ********Rockstar way********
#include <stdio.h>
void printTable(int multable[], int num, int n)
{
    printf("The multiplication table of %d :\n", num);
    for (int i = 0; i < n; i++)
    {
        multable[i] = num * (i + 1);
        printf("%dX%d=%d\n", num, i + 1, multable[i]);
    }
    printf("*******************************\n\n");
}
int main()
{
    int ntable, ntimes;
    printf("How many tables do you want to print\n");
    scanf("%d", &ntable);
    printf("How many times do you want to print the table\n");
    scanf("%d", &ntimes);
    int arr[ntable][ntimes];
    int tables[ntable];
    for (int i = 0; i < ntable; i++)
    {
        printf("Enter the number for which you want to genrate table\n");
        printf("%d.", i + 1);
        scanf("%d", &tables[i]);
        printTable(arr[i], tables[i], ntimes);
    }
    return 0;
}
