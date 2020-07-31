#include<stdio.h>
int main()
{
    int sec, m, h, s;
    printf("The sec is:");
    scanf("%d", &sec);
     h = (sec/3600);
     m = (sec - (3600*h))/60;
     s = (sec - (3600*h)-(m*60));
     printf( "Equal in %d h: %d m: %d s\n", h, m, s);
     return 0;
}
