#include<stdio.h>
int main()
{
    float weight,height,BMI;
    scanf("%f %f",&weight,&height);
    BMI = weight / height * height;
    printf("BMI_Value = %.2f",BMI);
    return 0;
}