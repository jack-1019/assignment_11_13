#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char from, char to, char aux);

int main(void)
{
    int disks = 4;
    printf("移動 %d 個圓盤的步驟如下：\n", disks);
    hanoi(disks, 'A', 'C', 'B');  // A:起始柱, C:目標柱, B:輔助柱
    system("pause");
    return 0;
}

void hanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("將圓盤 1 從 %c 移到 %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("將圓盤 %d 從 %c 移到 %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}