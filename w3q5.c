#include <stdio.h>
int p = 0, rem = 0;
int palndrm(int x)
{
    if (x == 0)
    {
        return p;
    }
    rem = x % 10;
    p = p * 10 + rem;
    x = x / 10;
    palndrm(x);
}
int main()
{
    int n;
    printf("Enter the number :\n");
    scanf("%d", &n);
    if (palndrm(n) == n)
    {
        printf("It is a Palindrome number.");
    }
    else
    {
        printf("It is not a Palindrome number.");
    }
}