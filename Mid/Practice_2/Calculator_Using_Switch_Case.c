#include<stdio.h>
int main()
{
    float a,b;
    char ch;
    scanf("%f %f %c",&a,&b,&ch);
    switch(ch)
    {
        case '+':
        printf("Sum = %f",a+b);
        break;

        case '-':
        printf("Min = %f",a-b);
        break;

        case '*':
        printf("Mul = %f",a*b);
        break;

        case '/':
        printf("Div = %.2f",a/b);
        break;

        default:
        printf("NOTHING");
        break;
    }
    return 0;
}