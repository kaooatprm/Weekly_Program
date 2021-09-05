//โจทย์ข้อ 22 วิธีที่ 1
#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (i % 2 == 1 && j % 2 == 1)
            {
                printf("*");
            }
            else if (i % 2 == 0 && j % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}