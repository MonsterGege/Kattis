#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,akhir;
    scanf("%d",&n);
    akhir = (n = ((1<<n) + 1)) * n; //operator bitwise
    printf("%d\n",akhir);
}
