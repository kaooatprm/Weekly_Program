//โจทย์ข้อ 22 วิธีที่ 2
#include <stdio.h>
void starpt(int x, int i, int j)
{
    if (i <= x)
    {
        if (j <= x)
        {
            if (i % 2 == 1 && j % 2 == 1)
            {
                printf("*");
                j++;
                starpt(x, i, j);
            }
            else if (i % 2 == 0 && j % 2 == 0)
            {
                printf("*");
                j++;
                starpt(x, i, j);
            }
            else
            {
                printf(" ");
                j++;
                starpt(x, i, j);
            }
        }
        else
        {
            printf("\n");;
            j = 1;
            i++;
            starpt(x, i, j);
        }
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    starpt(x, 1, 1);
    return 0;
}