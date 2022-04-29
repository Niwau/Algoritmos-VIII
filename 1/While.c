#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Insert 3 numbers: ");
    scanf("%d %d %d", &a,&b,&c);

    while(a <= b){
        if(a%c != 0){
            printf("%d ", a);
        }
        a++;
    }

    while(a >= b){
        if(a%c != 0){
            printf("%d ", a);
        }
        a--;
    }
}
