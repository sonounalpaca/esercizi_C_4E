/*
Dati due numeri interi e positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine decrescente i numeri compresi tra N1 e N2. 
*/


#include <stdio.h>

int main(int argc, char *argv[])
{
    int n1, n2, numero;
    
    do
    {
       do
       {
            printf("Inserire un primo numero: ");
            scanf ("%d", &n1);
       } while (n1 < 0);

       do
       {
            printf("Inserire un secondo numero: ");
            scanf ("%d", &n2);
       } while (n2 < 0);
       
        
    } while (n1 > n2);

    numero = n2
    do
    {
        printf ("%d", numero);
        numero = numero - 1;

    } while (numero >= n1);    

    return 0;  

}