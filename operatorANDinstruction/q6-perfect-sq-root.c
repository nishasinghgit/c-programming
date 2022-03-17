#include<stdio.h>

int main()
{
/*int num1, num2,i,n;
printf("enter tthe first no.of range");
scanf("%d",&num1);
printf("enter tthe 2nd no.of range");
scanf("%d",&num2);for (i=num1;i<=num2;i++)
{
    n=sqrt(i);
    if(n*n==1)
    {
        printf("\n%d",i);
    
    }
}*/
int num,n;
printf("enter tthe num");
scanf("%d",&num);
printf("\n number");
for(n=1;n<=num;n++)
{
    printf("\n%d", n*n);

}


return 0;
}