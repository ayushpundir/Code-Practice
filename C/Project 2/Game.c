#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int logic(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
}

int main()
{
    char comp, you;
    int num;
    srand(time(0));
    num = rand() % 100 + 1; // Genrate a random number between 1 and 100
    if (num < 33)
    {
        comp = 'r';
    }
    else if (num > 33 && num < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
    printf("Hi I'm Computer\nLet's play rock paper and seissor\n");
    printf("I have choosed 1 and now it's your turn\n");
    printf("Enter 'r' for rock 'p' for paper 's' for seissor: ");
    scanf("%c", &you);

    if (you != 'r' && you != 'p' && you != 's')
    {
        printf("Invalid input");
    }

    int result = logic(you, comp);
    if (result == 1)
    {
        printf("Computer chose %c and you chose %c\nYou won!", comp, you);
    }
    else if (result == -1)
    {
        printf("Computer chose %c and you chose %c\nYou lost!", comp, you);
    }
    else if (result == 0)
    {
        printf("Computer chose %c and you chose %c\nTie", comp, you);
    }
    return 0;
}