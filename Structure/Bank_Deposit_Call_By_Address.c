#include<stdio.h>

struct account
{
    int account_number;
    char name[50];
    float balance;
};

void deposit(struct account *a, float amount)
{
    a->balance = a->balance + amount;
}

int main()
{
    struct account a;
    float amount;

    scanf("%d %s %f", &a.account_number, a.name, &a.balance);
    scanf("%f", &amount);

    deposit(&a, amount);

    printf("%d %s %.2f", a.account_number, a.name, a.balance);

    return 0;
}