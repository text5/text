#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a;
 printf("请输入年份\n");
 scanf("%d",&a);
 if((a%100!=0&&a%4==0)||a%400==0)\
    printf("%d是闰年\n",a);
 else
    printf("%d不是闰年\n",a);
 return 0;
}
