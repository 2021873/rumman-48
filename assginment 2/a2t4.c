#include<stdio.h>
void main()
{
    float x, sum=1, no_row=1;
    int i, n;
    scanf("%f%d", &x, &n);
    for(i=1;i<=n;i++)
    {
        no_row=no_row*x/(float)i;
        sum=sum+no_row;

    }
    printf("The sum is%f\n", sum);
    return 0;
}
