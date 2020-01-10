#include<stdio.h>

int sum(int,int);
int sub(int,int);

int main()
{
     int num1, num2, res,ans;
     scanf("%d %d", &num1, &num2);
     
     res = sum(num1, num2);
     ans = sub(num1,num2);
 
     printf("%d",res);
     printf("%d",ans);
     return 0;
}

int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}

int sub(int a,int b)
{
     int c;
     c=a-b;
     return c;
}

