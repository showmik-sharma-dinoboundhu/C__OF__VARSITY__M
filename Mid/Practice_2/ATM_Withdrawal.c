#include<stdio.h>
int main()
{
    int bal,amnt;
    scanf("%d %d",&bal,&amnt);
    if(amnt > bal) printf("Insufficent Balance!");
    else if(amnt % 500 != 0) printf("Amount must be multiple of 500");
    else
    {
        bal = bal - amnt;
        printf("Withdrawal Successful!\n");
        printf("Remaining Balance = %d\n",bal);
    }
    return 0;
}