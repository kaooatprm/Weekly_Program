//โจทย์ข้อ 24 วิธีที่ 2
#include <stdio.h>

void triangle(int n, int i, int j)
{
    if (i < n)
    {
        if (j <= i)
        {
            printf("*");
            j++;
            triangle(n, i, j);
        }
        else
        {
            printf("\n");
            j = 0;
            i++;
            triangle(n, i, j);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle(n, 0, 0);
    return 0;
}