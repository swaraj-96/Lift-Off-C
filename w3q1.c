#include<stdio.h>

int sqrnum(int);

int main()
{
int a, square;

printf("\n Enter the no : ");
scanf("%d",&a);

square = sqrnum(a);

printf("\n Square of no is : %d ", square);

}

int sqrnum(int x)
{
return x*x;
}