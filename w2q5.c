#include<stdio.h>
int main()
{
    int i,j,n,p;
    printf("enter n: ");
    scanf("%d",&n);
    p=n*2-1;
    for(i=1; i<=p; i++)
      {
          for(j=1; j<=p; j++)
          {
              if(j==i || (j==p-i+1))
                 {
                     printf("*");
                 }
                else
                {
                    printf(" ");
                }
          }
          printf("\n");
      }
      
        return 0;
}