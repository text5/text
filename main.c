#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a;
 printf("���������\n");
 scanf("%d",&a);
 if((a%100!=0&&a%4==0)||a%400==0)\
    printf("%d������\n",a);
 else
    printf("%d��������\n",a);
 return 0;
}
