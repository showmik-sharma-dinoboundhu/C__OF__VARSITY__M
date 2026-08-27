#include<stdio.h>

struct car
{
    char model[50];
    int year;
    float price;
};

void expensive(struct car c[])
{
    int max = 0;

    for(int i = 1; i < 3; i++)
    {
        if(c[i].price > c[max].price)
            max = i;
    }

    printf("%s %d %.2f", c[max].model, c[max].year, c[max].price);
}

int main()
{
    struct car c[3];

    for(int i = 0; i < 3; i++)
    {
        scanf("%s %d %f", c[i].model, &c[i].year, &c[i].price);
    }

    expensive(c);

    return 0;
}