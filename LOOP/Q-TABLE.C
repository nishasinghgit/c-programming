#include<stdio.h>

int main()
{
int num;
printf("enter the table no.");
scanf("%d",&num);
for(int i=0;i<10; i++)
{
    printf("%d X %d=%d\n",num,i,i*num );
}
return 0;
}