#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,p;
    scanf("%f %f",&a,&b);
    p = pow(a,b);
    printf("Power = %.f",p);

    int A,B,P;
    scanf("%d %d",&A,&B);
    P = (int)pow(A,B);
    printf("Power = %d",P);

    return 0;
}