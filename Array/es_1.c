/*
Popolare un array di interi di dimensione 4, stamparne a video il
contenuto.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int array[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Inserire il %d° numero: ", i+1);
        scanf("%d", &array[i]);
    }

    printf ("Contenuto array: \n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}