#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 different value:");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
    {
        if(b>c)
            printf("%d is the 2nd largest value\n", b);
        else
             printf("%d is the 2nd largest value\n", c);
    }
    else if(b>a && b>c)
    {
        if(a>c)
             printf("%d is the 2nd largest value\n", a);
        else
             printf("%d is the 2nd largest value\n", c);
    }
    else if(a>b)

                     printf("%d is the 2nd largest value\n", a);
        else
             printf("%d is the 2nd largest value\n", b);
    }





