/*
Dato N un numero intero positivo, calcolare e visualizzare la
somma dei primi N numeri pari.
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
        if (n %2 == 0)
        {
            somma = somma + n;
            n = n - 1;
        }
        else
        {
            n = n - 1;
        }

    } while (n != 0);
    
    printf ("Somma pari: %d ", somma);
   
    return 0;  

}