#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int	bisezione(int a[], int dim, int n);


int main(int argc, char *argv[]){
	int a[DIM], i, n, ris;

	for(i=0; i<DIM; i++)
		scanf(" %d", &a[i]);

	scanf(" %d", &n);

	ris = bisezione(a, DIM, n);
	printf("%d\n", ris);

	return 0;
}


int	bisezione(int a[], int dim, int n)
{
	if(dim == 0)
		return 0;
	if(a[dim/2] == n)
		return 1;
	if(a[dim/2] > n)
		return bisezione(a, dim/2, n);
	else 
		return bisezione(&a[dim/2+1], dim - (dim/2+1), n);
}