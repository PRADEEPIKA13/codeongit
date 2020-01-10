#include<stdio.h>

int sum(int,int);

int main()
{
     int num1, num2, res;
     scanf("%d %d", &num1, &num2);
     
     res = sum(num1, num2);
 
     printf("%d",res);
     return 0;
}

int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}

