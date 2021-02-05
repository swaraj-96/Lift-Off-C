#include <stdio.h>


int main(){
    int r,diam;
    float pi= 3.14, area,circum;
    printf("enter radius of circle: \n");
    scanf("%d", &r);

    diam=2*r;
    area=pi*r*r;
    circum= 2*pi*r;
    
     
    printf("diameter of circle is : %d", diam);
    printf("\narea of circle is : %.2f", area);
    printf("\ncircumference of circle is : %.2f\n", circum);

    return 0;
   

}