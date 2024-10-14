/*
Chiedere in input 5 interi e inserirli in un array.
Stampare a video l'array al contrario.
Esempio:
input 5 6 9 11 12
output 12 11 9 6 5
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int n = 5;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Inserire un numero: ");
        scanf("%d", &array[i]);
    }

    for (int i = n; i >= 0; i--)
    {
        printf ("%d ", array[i]);
    }

    return 0;
}