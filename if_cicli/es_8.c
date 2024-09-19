/*
Progettare un algoritmo che risolve il seguente problema. Si desidera 
calcolare la somma delle radici quadrate di N valori numerici inseriti 
dall’utente, con N inserito in input. 
L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
con un messaggio di errore quando viene inserito un numero che non
permette di effettuare il calcolo (nel dominio dei numeri reali).
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int nValori, numero, conta = 0;
    double somma = 0;

    printf ("Quanti valori vuoi inserire?\n");
    scanf ("%d", &nValori);

    do
    {
        printf ("\nInserire valore: \n");
        scanf ("%d", &numero);
        conta = conta + 1;

        if (numero > 0)
        {
            somma = somma + sqrt(numero);
        }
        else
        {
            printf ("Non si può calcolare la radice di un numero negativo\n");
        }
        
    } while (numero > 0 && conta < nValori);
    
    printf ("Somma: %0.2lf", somma);
        
    return 0;
}
