#include<stdio.h>
#include<math.h>
void listNumbersAsc(int start, int end)
{
    int i;
    for(i=start;i<=end;i++)
    {
        printf("%d", i);
    }
}
int main()
{
    int x,y;
    scanf("%d%d", &x, &y);
     listNumbersAsc(x,y);
     return 0;

}
