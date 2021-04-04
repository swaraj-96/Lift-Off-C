int factorial(int p)
{
    if (p == 0 || p == 1)
    {
        return 1;
    }
    else
    {
        return p * factorial(p - 1);
    }
}
#include <stdio.h>
int main()
{
    int f;
    printf("Enter the number\n");
    scanf("%d", &f);
    printf("Factorial of %d is %d.", f, factorial(f));

    return 0;
}