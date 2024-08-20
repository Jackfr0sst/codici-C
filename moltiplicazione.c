#include <stdio.h>
int main()
{
    int primo_fattore;
    int secondo_fattore;
    int risultato;

    printf("Inserisci il primo numero\n");
    scanf("%d", &primo_fattore); //assegnazione del primo fattore da tastiera

    printf("Inserisci il secondo numero\n");
    scanf("%d", &secondo_fattore); //assegnazione del secondo fattore da tastiera

    risultato = primo_fattore * secondo_fattore; //calcolo del risultato
    
    printf("La moltiplicazione tra i due numeri dà: %d\n", risultato); //print a schermo del risultato

    return 0;
}