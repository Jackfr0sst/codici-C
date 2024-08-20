#include <stdio.h>
int main()
{
    int primoNumero;
    int secondoNumero;
    float mediaAritmetica;

    printf("inserisci il primo numero: \n");
    scanf("%d", &primoNumero); //assegnazione del primo numero da tastiera

    printf("Inserisci il secondo numero: \n");
    scanf("%d", &secondoNumero); //assegnazione del secondo numero da tastiera

    mediaAritmetica = (float)(primoNumero + secondoNumero) / 2; //calcolo della media di tipo float

    printf("la media aritmetica tra i due numeri è: %6.2f\n", mediaAritmetica); //print del risultato

    return 0;
    }