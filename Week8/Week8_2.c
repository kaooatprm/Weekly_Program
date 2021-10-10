//โจทย์ข้อ 59
#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];
   printf("Input: ");
   scanf("%s",s);
   printf("Output: %s", strrev(s));
   return 0;
}