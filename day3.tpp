#include<stdio.h>
int main()
{
for(int i=1;i<=5;i++)
{
for(int j=5-i;j>=1;j--)
{
printf(" ");
}
for(int k=i;k>=1;k--)
{
printf("%d",k);
}
printf("\n");
}
}
