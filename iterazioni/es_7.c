/*
Dato N un numero intero positivo maggiore di 1, generare e visualizzare
il numero precedente. 
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    
    do
    {
        printf ("Inserire un numero maggiore di 1: ");
        scanf ("%d", &n);
        
    } while (n < 1);

    n = n - 1;
    printf ("Precedente: %d", n);

    return 0;  

}