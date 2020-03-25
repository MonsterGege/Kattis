#include <stdio.h>
#include <stdlib.h>

void main()
{
    int angka1,angka2;
    scanf("%d", &angka1);
    scanf("%d", &angka2);
    if(angka1>0 && angka2>0){
        printf("1");
    }else if(angka1 < 0 && angka2 > 0){
        printf("2");
    }else if(angka1 < 0&& angka2 < 0){
        printf("3");
    }else if(angka1 > 0&& angka2 < 0){
        printf("4");
    }
}
