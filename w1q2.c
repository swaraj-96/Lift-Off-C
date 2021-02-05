#include <stdio.h>

int main(){
    float c ,f;
    printf("enter temperature in Celsius: \n");
    scanf("%f", &c);
    f=(c*9/5)+32;
    printf("given temperature is %.2f fahrenheit", f);
    return 0;
}