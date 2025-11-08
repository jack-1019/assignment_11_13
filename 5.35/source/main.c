#include <stdio.h>
#include <stdlib.h>

unsigned long fibonacci(unsigned int n);

int main(void)
{
    unsigned int n;

    printf("請輸入要計算的費氏數列項數 n：");
    scanf_s("%d", &n);

    printf("Fibonacci(%d) = %ld\n", n, fibonacci(n));

    system("pause");
    return 0;
}

unsigned long fibonacci(unsigned int n)
{
    if (n == 1) return 0;

    unsigned long prev = 0, curr = 1, next;
    for (unsigned int i = 2; i <= n-1; i++)
    {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}