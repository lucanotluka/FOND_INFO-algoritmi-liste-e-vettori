#include <stdio.h>
#include <stdlib.h>
#define DIM 10

void arraypari(int [], int, int**, int*);

int main(){
	int array[DIM], *arrb, i, dimb;
	for(i=0;i<DIM;i++)
		scanf(" %d", array[i]);

	arraypari(array, DIM, &arrb, &dimb);
	if(dimb>0)
	{
		for(i=0;i<dimb;i++)
			printf("%d\n", *(arrb+i));
		free(arrb);
	}
	else if (dimb == 0)
		printf("Array vuoto\n");
	else
		printf("Errore\n");

	return 0;
}

void arraypari(int a[], int dima, int **b, int *dimb){
	int i, j;
	for(i=0, *dimb=0; i<dima; i++)
		if(a[i]%2==0)
			(*dimb)++;

	if(*dimb!=0){
		*b = malloc(sizeof(int)*(*dimb));
		if( *b != NULL){
			for(i=0, j=0; i<dima; i++)
				if(a[i]%2==0)
				{
					*(*b+j) = a[i];
					j++;
				}
		} else
			*dimb=-1;
	}
	else
		*b = NULL;
}