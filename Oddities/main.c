#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
    int q;
    scanf("%d", &q);
        if(q%2==0){
            printf("%d is Even\n",q);
        }else{
            printf("%d is Odd\n",q);
        }
    }
}
