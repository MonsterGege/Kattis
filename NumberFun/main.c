#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        bool possible = false;
        if(a + b == c){
            possible = true;
        }else if(a*b == c){
            possible = true;
        }else if(a-b == c){
            possible = true;
        }else if(b-a == c){
            possible = true;
        }else if(a%b == c && a/b==c){
            possible = true;
        }else if(b%a == c && b/a==c){
            possible = true;
        }
        if(possible){
            printf("Possible");
        }else{
            printf("Impossible");
        }
    }
}
