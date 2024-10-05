/*
Dati due numeri interi positivi N1 e N2, verificare se N1 è il quadrato 
di N2. 
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
    int n1, n2;

   do
    {
        printf("Inserire un numero: ");
        scanf ("%d", &n1);

        printf("Inserire un altro numero: ");
        scanf ("%d", &n2);

    } while (n1 < 0 && n2 < 0);

    if ((n2*n2) == n1)
    {
        printf ("Il primo numero è quadrato del secondo");
    }
    else
    {
        printf ("Il primo numero non è quadrato del secondo");
    }
    
    return 0;  

}