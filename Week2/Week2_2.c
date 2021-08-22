//โจทย์ข้อ 25
#include <stdio.h>
int main()
{
    int x,space;
    scanf("%d",&x);
    space = x-1;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            printf("*");
        }
        space--;
        printf("\n");
    }
    return 0;
}