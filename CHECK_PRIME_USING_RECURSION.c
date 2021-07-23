#include <stdio.h>
int prime(int num, int i)
{
    if (i == 1)
        return 1;
    else
    {
       if (num % i == 0)
         return 0;
       else
         return prime(num, i-1);
    }
}
void main()
{
    int num, a;
    printf("Enter a number : ");
    scanf("%d", &num);
    a = prime(num, num / 2);
    if (a==1)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
}

