#include <stdio.h>
int main() 
{
     int n, rev = 0;
    printf("Enter an integer: ");
     scanf("%d", &n);
    while (n != 0) 
    {
         rev = n % 10;
         rev = rev * 10 + r;
         n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}
