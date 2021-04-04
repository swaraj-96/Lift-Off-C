#include <stdio.h>
int factorial(int x)
{
    int p=1;
    for (int i = 2; i <= x; i++)
    {
        p=p*i;
    }
    return p;
}
int main()
{
    int f;
    printf("Enter the number\n");
    scanf("%d", &f);
    printf("Factorial of %d is %d.", f, factorial(f));

    return 0;
}