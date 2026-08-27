#include<stdio.h>

struct product
{
    char name[50];
    int id;
    float price;
};

int main()
{
    struct product p[3];

    for(int i = 0; i < 3; i++)
    {
        scanf("%s %d %f", p[i].name, &p[i].id, &p[i].price);
    }

    if(p[0].price > p[1].price && p[0].price > p[2].price)
        printf("%s %d %.2f", p[0].name, p[0].id, p[0].price);
    else if(p[1].price > p[0].price && p[1].price > p[2].price)
        printf("%s %d %.2f", p[1].name, p[1].id, p[1].price);
    else
        printf("%s %d %.2f", p[2].name, p[2].id, p[2].price);

    return 0;
}