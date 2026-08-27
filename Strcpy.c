#include<stdio.h>
#include<string.h>
int main()
{
    char I[20] = "Showmik";
    char J[20] = "Tomal";
    strcpy(J, I);
    printf(J);
    return 0;
}