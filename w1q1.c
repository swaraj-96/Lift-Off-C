#include <stdio.h>

int main()
{
    int a, b;
    int sum, sub, prod, mod;
    float div;

printf("enter two no: ");
scanf("%d%d",&a,&b);

sum=a+b;
sub=a-b;
prod=a*b;
div= (float)a/b;
mod=a/b;

printf("sum is= %d\n",sum);
printf("difference is= %d\n",sub);
printf("product is= %d\n",prod);
printf("quotient is= %.2f\n",div);
printf("modulus is= %d\n",mod);

return(0);
}


    