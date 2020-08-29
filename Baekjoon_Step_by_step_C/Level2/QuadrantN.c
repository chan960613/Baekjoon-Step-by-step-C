#include <stdio.h>

int main()

{
    int XNum, YNum;

    scanf("%d", &XNum);
    scanf("%d", &YNum);

    if(XNum > 0 && YNum > 0)
    {
        printf("1\n");
    }else if(XNum < 0 && YNum > 0)
    {
        printf("2\n");
    }else if(XNum < 0 && YNum < 0)
    {
        printf("3\n");
    }else if(XNum > 0 && YNum < 0)
    {
        printf("4\n");
    }

    return 0;
}