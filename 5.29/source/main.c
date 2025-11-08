#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(void)
{
    int num1, num2;
    printf("請輸入兩個整數：");
    scanf_s("%d %d", &num1, &num2);

    printf("%d 和 %d 的最小公倍數是：%d\n", num1, num2, lcm(num1, num2));
    system("pause");
    return 0;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}