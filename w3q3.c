#include <stdio.h>

int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
int main()
{
    int n1, n2, hcf;
    printf("Enter two  integers: ");
    scanf("%d %d", &n1, &n2);
    hcf = gcd(n1, n2);
    printf("G.C.D = %d.", n1, n2, hcf);
    printf("\nL.C.M = %d.", n1, n2, (n1 * n2) / hcf);

    return 0;
}

