#include <stdio.h>
#include <stdlib.h>

char changeCase(char ch);

int main(void)
{
    char input;
    printf("請輸入一個英文字母：");
    scanf_s(" %c", &input);  

    printf("轉換後的字母是：%c\n", changeCase(input));
    system("pause");
    return 0;
}

char changeCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')  
        return ch + 32;          
    else if (ch >= 'a' && ch <= 'z')  
        return ch - 32;              
    else
        return ch;  
}