#include<stdio.h>

int sum(int,int);
int sub(int,int);
int mul(int,int);

int main()
{
     int num1, num2, res,ans,prod;
     scanf("%d %d", &num1, &num2);
     
     res = sum(num1, num2);
     ans = sub(num1,num2);
     prod = mul(num1,num2);
 
     printf("%d\n",res);
     printf("%d\n",ans);
     printf("%d\n",prod);
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

int mul(int a,int b)
{
     int z;
     z=x*y;
     return z;
}

