#include<stdio.h>
struct myType
{
    char Name [40];
    int age;
    float height;
    double weight;
};

int main()
{
    struct myType human;
    scanf("%s %d %f %lf",human.Name, &human.age, &human.height, &human.weight);
    printf("%s\n%d\n%.2f\n%lf\n",human.Name, human.age, human.height, human.weight);
    printf("%d Bytes",sizeof(human));
    return 0;
}