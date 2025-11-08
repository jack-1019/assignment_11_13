#include <stdio.h>
#include <stdlib.h>

long power(long base, int exponent);

int main(void)
{
    long base;
    int exponent;

    printf("請輸入底數：");
    scanf_s("%ld", &base);

    printf("請輸入指數（必須 >= 1）：");
    scanf_s("%d", &exponent);

    if (exponent < 1)
    {
        printf("指數必須大於或等於 1！\n");
    }
    else
    {
        printf("%ld 的 %d 次方是：%ld\n", base, exponent, power(base, exponent));
    }

    system("pause");
    return 0;
}

long power(long base, int exponent)
{
    if (exponent == 1)
        return base;
    else
        return base * power(base, exponent - 1);
}