#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int line = 6;
    for (int i = 3; i <= n; i += 2)
    {
        line++;
    }
    int space = line -1; //each time space--;
    int star = 1; //each time star += 2;

    for(int i = 0; i < line; i++){
        for(int j = 0; j < space; j++){
            printf(" ");
        }
        for(int j = 0; j < star; j++){
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}