#include <stdio.h>
#define DIM 10

int bis(int[], int, int);

int main(){
	int array[DIM], n, i;
	printf("[");
	for(i=0;i<DIM;i++)
		scanf(" %d", &array[i]);
	printf("]\n");
	printf("\nInserisci numero da cercare!  ");
	scanf(" %d", &n);
	printf("%d\n", bis(array, DIM, n));

	return 0;
}


int bis(int a[], int dim, int n)
{
	int ris;
	printf("Medio: %d in posizione %d\n", a[dim/2], dim/2);
	if(dim==0)
		ris=0;
	else if(n==a[dim/2])
		ris=1;
	else if(n<a[dim/2])
	{
		printf("Estremi %d - %d\n", a[0], a[dim/2]);
		ris=bis(a,dim/2,n);
	} else {
		printf("Estremi %d - %d\n", a[dim/2+1], a[dim-(dim/2+1)]);
		ris=bis(&a[dim/2+1], dim-(dim/2+1),n);
	}
	return ris;
}