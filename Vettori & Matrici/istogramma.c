#include <stdio.h>
#define DIM 10

int main(){
	int n, i, j, istogramma[DIM];//i contatori sono nel vettore
		
	for(i=0;i<DIM;i++)
		istogramma[i]=0;

	scanf(" %d", &n);
	while(n>=0 && n<DIM){
		istogramma[n]++;
		scanf(" %d", &n);
	}

	for(i=0;i<DIM;i++)
	{	
		printf("%d", i);
		for(j=0;j<istogramma[i];j++)
			printf("*");
		printf("\n");
	}

	return 0;
}