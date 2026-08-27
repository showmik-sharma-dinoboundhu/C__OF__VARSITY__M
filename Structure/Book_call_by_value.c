#include<stdio.h>

struct book
{
    char title[50];
    char author[50];
    float price;
};

void display(struct book b)
{
    printf("%s %s %.2f", b.title, b.author, b.price);
}

int main()
{
    struct book b;

    scanf("%s %s %f", b.title, b.author, &b.price);

    display(b);

    return 0;
}