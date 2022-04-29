#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a,b,c;
    printf("Insert 3 numbers: ");
    scanf("%d %d %d", &a,&b,&c);

    for(a; a < b; a++){
        if(a%c != 0){
            printf("%d ", a);
        }
    }

    for(a; a >= b; a--){
        if(a%c != 0){
            printf("%d ", a);
        }
    }
}
