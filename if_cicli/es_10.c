/*
Una birreria a fine serata deve conteggiare l’incasso. 
La cassiera accende il software gestionale il quale le chiede di inserire una alla volta le consumazioni servite.
Le consumazioni si dividono in bevande e ristorazione. 
La cassiera per ogni consumazione deve inserire la tipologia di consumazione e il suo importo.

Quando la cassiera inserisce la stringa “esci” il software deve mostrare a video le seguenti informazioni:
1.	La media dell’incasso delle bevande 
2.	La media dell’incasso della ristorazione
3.	Deve indicare se sono state vendute più bevande o più ristorazioni
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int bevande = 0, ristorazione = 0;
    double mediaBevande, mediaRistorazione, sommaBevande = 0.0, sommaRistorazione = 0.0, importo;
    char tipo [15];

    do
    {
        do
        {
           printf ("Inserimento consumazioni: \n");
           scanf ("%s", tipo);

        } while (strcmp("esci", tipo) != 0 && strcmp(tipo, "bevande") != 0 && strcmp(tipo, "ristorazione") != 0);

        if (strcmp("esci", tipo) != 0)
        { 
            printf ("Importo: ");
            scanf ("%lf", &importo);
        }

        if (strcmp(tipo, "bevande") == 0)
        {
            sommaBevande = sommaBevande + importo;
            bevande = bevande + 1;
        }
        if (strcmp(tipo, "ristorazione") == 0)
        {
            sommaRistorazione = sommaRistorazione + importo;
            ristorazione = ristorazione + 1;
        }
        
    } while (strcmp("esci", tipo) != 0);
    
    mediaBevande = sommaBevande / (double) bevande;
    mediaRistorazione = sommaRistorazione / (double) ristorazione;
    printf ("\nMedia incasso Bevande: %0.2lf\n", mediaBevande);
    printf ("Media incasso Ristorazione: %0.2lf\n", mediaRistorazione);

    if (bevande > ristorazione)
    {
        printf ("\nSono state vendute più Bevande\n");
    }
    else
    {
        printf ("Sono state vendute più Ristorazioni\n");
    }

    return 0;
}
