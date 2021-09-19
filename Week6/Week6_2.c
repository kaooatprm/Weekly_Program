//โจทย์ข้อ 21 วิธีที่ 2
#include <stdio.h>
void rect(int n, int i, int j)
{
    if (i < n)
    {
        if (j < n)
        {
            printf("*");
            j++;
            rect(n, i, j); 
        } 
        else
        {  
            printf("\n");
            j=0;
            i++;
            rect(n, i, j);   
        }
    }
}
int main()  
{  
    int n;  
    scanf("%d",&n);
    rect(n, 0, 0);
    return 0;  
} 