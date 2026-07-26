#include<stdio.h>
#include<math.h>

int main()
{
    long long int a;
    scanf("%lld",&a);

    int cube = pow(a,3);

    printf("The Cubic Answer is - %lld",cube);
    return 0;
}