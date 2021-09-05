#include "header.h"

int readchoice()
{
    int choice;
    int read = scanf("%d", &choice);
    if(read!=1)
        printf("\nEnter valid input: ");
    while(read!=1)
    {
        getchar();
        read = scanf("%d", &choice);
    }
    return choice;
}