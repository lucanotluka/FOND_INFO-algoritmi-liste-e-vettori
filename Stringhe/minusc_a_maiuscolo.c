// es. conversione lower upper case
/*Scrivere un programma in C che chiede 
all'utente un carattere dell'alfabeto 
minuscolo (assumiamo che l'utente non 
inserisca un carattere non valido). 
Il programma calcola e visualizza il
corrispondente carattere maiuscolo.*/
#include <stdio.h>

int main(){
	char minuscola, maiuscola;
	scanf("%c\n", &minuscola);
	maiuscola = minuscola - 'a' + 'A';
	//dalla minuscola sottraggo la distanza
	// tra minuscola e maiuscola, costante
	// tra tutte le coppie lower e upper.

	printf("%c\n", maiuscola);

	return 0;
}