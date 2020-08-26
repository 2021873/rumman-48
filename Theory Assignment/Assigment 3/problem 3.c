#include<stdio.h>
void listNumbersDsc(int start, int end)

{
    int i;
   for(i=start;i>=end;i--)
   {
       printf("%d\n", i);
   }
}
int main()
{
    int x,y;
    printf("Input the start Number:");
    scanf("%d", &x);
     printf("Input the end Number:");
    scanf("%d", &y);
    listNumbersDsc(x,y);
    return 0;

}
