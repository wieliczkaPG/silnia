
#include <stdio.h>


int main()
{
    int i,x,silnia=1;
    printf("\n Wczytaj cyfre: ");
    scanf("%d",&x);


    for(i=1;i<=x;i++)
        silnia=silnia*i;
    printf("\n %d! = %d",x,silnia);

    return 0;
}