#define _CRT_SECURE_NO_WARNINGS   1
#define    SWAP(x)     (((x&(0x55555555)) << 1) | ((x&(0xAAAAAAAA)) >> 1))
#include<stdio.h>
#include<windows.h>
int main()
{
int i,c,d;
int x=10;
int b=SWAP(x);
printf("交换后的数是：%d\n",b);
printf("转换前的二进制序列： ");
for(i=31;i>=0;i--)
{
  c=(x>>i)&1;
  printf("%d",c);
}
printf("\n");
printf("转化后的二进制序列:  ");
for(i=31;i>=0;i--)
{
  d=(b>>i)&1;
  printf("%d",d);
}
printf("\n");
system("pause");
return 0;
}
 