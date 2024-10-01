/*
Dato N un numero intero positivo, generare e visualizzare in ordine
decrescente i primi N numeri interi positivi.
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    
    do
    {
        printf ("Inserire un numero intero positivo: ");
        scanf ("%d", &n);
        
    } while (n < 0);

    do
    {
        printf ("%d", n);
        n = n - 1;

    } while (n > 0);    

    return 0;  

}