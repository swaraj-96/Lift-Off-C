#include<stdio.h>
int main()
    {
        int a[50] ,i,n,large,small;
        printf("no of elements in the array :");
        scanf("%d",&n);
        printf("enter the element of the array:");
            for(i=0;i<n;i++)
            
                scanf("%d",&a[i]);
            
        large=small=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>=large)
                large=a[i];
            if(a[i]<small)
                small=a[i];    
        }
        printf("larger element is: %d",large);
        printf("\nsmallest element is: %d",small);
        return 0;    
    
    }


