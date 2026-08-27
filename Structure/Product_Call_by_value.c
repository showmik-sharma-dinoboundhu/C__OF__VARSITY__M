#include<stdio.h>

struct product
{
    char name[50];
    int quantity;
    float price;
};

void total(struct product p)
{
    float cost = p.quantity * p.price;
    printf("%.2f", cost);
}

int main()
{
    struct product p;

    scanf("%s %d %f", p.name, &p.quantity, &p.price);

    total(p);

    return 0;
}