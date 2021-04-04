#include <stdio.h>
int main() 
{
    int s[50],n,sum=0;
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    
    printf("enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    
    for(int i=0;i<n;i++)
    {
            if(s[i]%2==0 || i%2==0)
      {
               sum=sum+s[i];
        
      }
    }
    
    printf("sum=%d",sum);
    return 0;

}