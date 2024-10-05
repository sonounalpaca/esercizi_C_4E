/*
Dato un numero intero positivo N verificare se N è un numero primo.
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;

   do
    {
        printf("Inserire un numero: ");
        scanf ("%d", &n);

    } while (n < 0);

    int i = n;
    int conta;
    do
    {
        if (n %i == 0)
        {
            conta = conta + 1;
        }
        i = i - 1;

    } while (i != 0);
    
    if (conta == 2)
    {
        printf ("Il numero è primo");
    }
    else
    {
        printf ("Il numero non è primo");
    }
    
    
    return 0;  

}