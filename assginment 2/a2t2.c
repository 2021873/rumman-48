#include<stdio.h>
int main()
{
    int i, x, fact=1;
    scanf("%d", &x);
    for(i=1;i<=x;i++)
    {
        fact *=i;


    }
    printf("The factorial of %d = %d\n", x, fact);
    return 0;
}

