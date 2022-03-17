#include<stdio.h>

int main()
{
int x = 2;
int y = 3;
printf("the value of 3*x - 8*y is %d \n", 3*x - 8*y);//not use BODMAS 
//8*3 / 3*x = 24/6 will give wrong answer
// 24/3*2
// 8*2
// 16

return 0;
}