//โจทย์ข้อ 45 วิธีที่ 2
#include <stdio.h>
int fact(int k)
{
    if (k>=1)
    {
        return k*fact(k-1);
    }
    else 
    {
        return 1;
    }
}

int main()
{
    int k;
    scanf ("%d" ,&k);
    printf ("%d" ,fact(k));
    return 0;
}