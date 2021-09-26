//โจทย์ข้อ 45 วิธีที่ 1
#include <stdio.h>
int main()
{
    int k,n=1;
    scanf ("%d" ,&k);
    for (int i=1; i<=k; i++)
    {
        n=n*i;
    }
    printf ("%d" ,n);
    return 0;
}