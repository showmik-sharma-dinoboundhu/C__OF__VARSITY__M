#include<stdio.h>

struct distance
{
    int feet;
    int inch;
};

struct distance add(struct distance d1, struct distance d2)
{
    struct distance d3;

    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;

    if(d3.inch >= 12)
    {
        d3.feet++;
        d3.inch = d3.inch - 12;
    }

    return d3;
}

int main()
{
    struct distance d1, d2, d3;

    scanf("%d %d", &d1.feet, &d1.inch);
    scanf("%d %d", &d2.feet, &d2.inch);

    d3 = add(d1, d2);

    printf("%d feet %d inch", d3.feet, d3.inch);

    return 0;
}