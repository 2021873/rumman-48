#include<stdio.h>
#include<math.h>
int sum (int n)
{
    int sum =0, i;
    for(i=1;i<=n;i++)
    {
        sum += i;

    }
    return sum;

}
int main()
{
    int x, sumr;
    scanf("%d", &x);
    sumr=sum(x);
    printf("%d\n", sumr);
    return 0;
}
