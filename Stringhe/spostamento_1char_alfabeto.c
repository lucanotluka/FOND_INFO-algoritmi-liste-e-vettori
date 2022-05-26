// es. carattere successivo
/* Dato un carattere dell'alfabeto minuscolo,
il programma resitituisce il carattere
successivo. Se arrivati alla fine, restituire
il primo carattere. */

#include <stdio.h>
#define PASSO 1 //deve essere compreso tra 0 e 25
				//PASSO>25 è insensato
int main(){
	char car_in, car_out;
	scanf("%c\n", &car_in);
	// al carattere iniziale sottraggo 'a' ascii
	// per andare a 0 e poter utilizzare il modulo
	// senza problemi. Il modulo è dato da quanti 
	//elementi ho nell'insieme, quindi il valore
	// di 'z'-'a'+1.
	car_out = (car_in - 'a' + PASSO)%('z'-'a'+ 1) +'a';
	printf("%c\n", car_out);

	return 0;
}