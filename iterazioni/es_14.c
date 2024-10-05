/*
Dati due numeri interi positivi N1 ed N2 calcolare, mediante la somma
ripetuta, il prodotto dei due numeri e visualizzarli.
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
    int n1, n2, prodotto = 0;

   do
    {
        printf("Inserire un numero: ");
        scanf ("%d", &n1);

        printf("Inserire un altro numero: ");
        scanf ("%d", &n2);

    } while (n1 < 0 && n2 < 0);

   for (int i = 0; i < n2; i++)
   {
        prodotto = prodotto + n1;
   }
    
    printf ("Prodotto: %d ", prodotto);
   
    return 0;  

}