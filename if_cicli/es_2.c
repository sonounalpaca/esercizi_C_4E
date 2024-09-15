/*
Progettare un algoritmo che effettui le seguenti operazioni:
• continui a leggere da tastiera due valori numerici, fermandosi quando uno dei due numeri è
0 (zero)
• per ogni coppia di numeri letti:
◦ calcoli il prodotto dei due numeri e ne stampi il valore
◦ sommi il prodotto calcolato ad una variabile che memorizzi la somma di tutti i prodotti
• all’uscita del ciclo, stampi il valore della somma
*/

#include <stdio.h>

int main()
{
    int x, y;
    int prodotto, somma = 0;

    do
    {
        printf ("Inserire primo numero: \n");
        scanf ("%d", &x);
        printf ("Inserire secondo numero: \n");
        scanf ("%d", &y);

        prodotto = x*y;
        printf ("Il prodotto è: %d \n\n", prodotto);

        somma = somma + prodotto;

    } while (x != 0 && y != 0);
    
    printf ("La somma dei prodotti è: %d", somma);
    
    return 0;
}