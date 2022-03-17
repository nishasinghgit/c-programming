#include<stdio.h>

int main()
{
int i,n,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
        count++;
    }
}
if(count==2)
printf("prime number");
else
printf("not prime number");
return 0;
}