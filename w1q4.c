#include<stdio.h>

int main(){
    int phy,chem,math,bio,comp;
    float percentage;

    printf("enter marks of physics: ");
    scanf("%d", &phy);
    printf("\nenter marks of chemistry: ");
    scanf("%d", &chem);
    printf("\nenter marks of mathematics: ");
    scanf("%d", &math);
    printf("\nenter marks of biology: ");
    scanf("%d", &bio);
    printf("\nenter marks of comp sc: ");
    scanf("%d", &comp);

    percentage=(phy+chem+math+bio+comp)/5;
    printf("you secured %.2f percentage\n",percentage);

    if(percentage >= 90)
    {
        printf("your grade is A");
    }
    else if(percentage >= 80)
    {
        printf("your grade is B");
    }
    else if(percentage >= 70)
    {
        printf("your grade is C");
    }
    else if(percentage >= 60)
    {
        printf("your grade is D");
    }
    else if(percentage >= 40)
    {
        printf("your grade is E");
    }
    else
    {
        printf("your grade is F");
    }

    
     return 0;
}

