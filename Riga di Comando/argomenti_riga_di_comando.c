#include <stdio.h>

int main(int argc, char *argv[]){	

	/*	i parametri attuali nel main sono
		un intero e un doppio puntatore:
		quando noi invochiamo l'exe del programma,
		a riga di comando possiamo scrivere gli argomenti.
		questi N argomenti sono riversati nei parametri 
		del main:
			ex.    ./prova.exe uno due tre

		gli argomenti sono N = 4: 
			1. ./prova.exe
			2.	uno
			3. 	due
			4.	tre
		e inoltre questi argomenti vengono salvati come
		stringe nell'array di puntatori argv[]: 
		ovviamente, saranno ordinati 
		in base all'inserimento.
		
	*/

	return 0;
}
