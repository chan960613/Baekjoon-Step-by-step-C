#include <stdio.h>

int main()
{
    int H, M;

    scanf("%d %d", &H, &M);

    if(0<=H<=23&&0<=M<=59)
    {
        if(H*60+M >= 45)
        {
            printf("%d %d", (H*60+M-45)/60, (H*60+M-45)%60);
        }else{
        printf("%d %d", (1440-(45-(H*60+M)))/60, (1440-(45-(H*60+M)))%60);
        }
    }

    return 0; 
}