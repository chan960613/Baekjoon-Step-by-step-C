#include <stdio.h>
int main()
{
    int Num1, Num2, Num3, Num4, Num5, Num6;

    scanf("%d", &Num1);
    scanf("%d", &Num2);

    printf("%d\n", Num1*(Num2%10));
    printf("%d\n", Num1*((Num2%100)-(Num2%10))/10);
    printf("%d\n", Num1*(Num2-Num2%100)/100);
    printf("%d", (Num1*(Num2%10)) + (Num1*((Num2%100)-(Num2%10))) + (Num1*(Num2-Num2%100)));

    return 0;
}