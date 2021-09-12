//โจทย์ข้อ 74 วิธีที่ 2
#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d",&x);
    scanf("%d",&y);
    x = x^y;
    y = x^y;
    x = x^y;
    printf("X : %d ",x);
    printf("Y : %d ",y);
    return 0;
}