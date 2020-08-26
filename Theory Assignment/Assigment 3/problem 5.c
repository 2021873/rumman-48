#include<stdio.h>
#include<math.h>
int sumofDigits(int x)
{
    int sum=0,i;
    for(i=x;i>0;i=i%10)
    {
        sum += (i%10);
    }
    return sum;
}
int main()
{
    int n,x, sumd;
    scanf("%d", &n);
    sumd=sumofDigits(x);
    printf("sum =%.2lf\n", sumd);
    return 0;
}
