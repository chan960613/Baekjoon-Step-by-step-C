#include <stdio.h>

int main()
{
    int Score;

    scanf("%d", &Score);

    if(Score >= 90)
    {
        printf("A\n");
    }else if(Score >= 80)
    {
        printf("B\n");
    }else if(Score >= 70)
    {
        printf("C\n");
    }else if(Score >= 60)
    {
        printf("D\n");
    }else
    {
        printf("F\n");
    }

    return 0;
}