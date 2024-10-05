/*
Dato N un numero intero positivo, calcolare e visualizzare la somma dei
primi N numeri interi. 
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, somma = 0;

   do
    {
        printf("Inserire un numero: ");
        scanf ("%d", &n);
    } while (n < 0);

    do
    {
        somma = somma + n;
        n = n - 1;

    } while (n != 0);
    
    printf ("Somma: %d ", somma);
   
    return 0;  

}