#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,fact=1;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("fact is %d",fact);
    return 0;
}
