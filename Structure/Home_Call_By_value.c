#include<stdio.h>

struct salary
{
    float basic;
    float house_rent;
    float medical_allowance;
};

void total(struct salary s)
{
    float total = s.basic + s.house_rent + s.medical_allowance;
    printf("%.2f", total);
}

int main()
{
    struct salary s;

    scanf("%f %f %f", &s.basic, &s.house_rent, &s.medical_allowance);

    total(s);

    return 0;
}