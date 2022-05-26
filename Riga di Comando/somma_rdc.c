#include <stdio.h>
#include <stdlib.h>
#define N 2

int main(int argc, char *argv[]){	
	int n1, n2;

	if(argc == N+1)
	{
		n1 = atoi(argv[1]);		/* casta in intero una stringa */
		n2 = atoi(argv[2]);		/* composta da SOLE cifre */
		printf("%d\n", n1+n2);
	} else
		printf("Errore argomenti\n");

	return 0;
}
