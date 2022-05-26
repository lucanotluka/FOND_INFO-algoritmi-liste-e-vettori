#include <stdio.h>
#include <stdlib.h>

int main(){
	int dim, i, *p;

	scanf(" %d", &dim);
	p = malloc(dim*sizeof(int));
	if (p)
	{
		for(i=0; i<dim; i++)
			scanf(" %d", &p[i]); /*devi salvare nell'indirizzo*/
		for(i=0; i<dim; i++)
			printf("%d ", p[i]); /*devi stampare il valore*/

		printf("\n");
		free(p);
	} else 
		printf("Errore di allocazione\n");

	return 0;
}