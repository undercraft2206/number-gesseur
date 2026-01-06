#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int number = rand() % 10000;
       int value;
    printf("find the number\n");
    printf("its between 0 and 10000");
    while(number != 0){
        printf("\nvalue: ");
        scanf("%d", &value);
        if(value > number){
            printf("its less");
        } else if(value == number){
            printf("you found it !\n");
            break;
        } else if(value <number){
            printf("its more");
        } 
    }
}