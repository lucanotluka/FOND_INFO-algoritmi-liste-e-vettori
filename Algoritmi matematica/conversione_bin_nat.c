#include <stdio.h>
#define BIT 10
#define BASE 2

int main(){			//1024 == 2^10
	int n, i, bin[BIT], iniziato;
	
	scanf(" %d", &n);
	while(n<0 || n>1024)
	{
		printf("Valore non valido");
		scanf(" %d", &n);
	}
	for(i = BIT-1; i >= 0; i--)
	{
		bin[i] = n%BASE;
		n = n/BASE;
	}
	for(i=0, iniziato=0; i < BIT; i++){
		if(bin[i])
			iniziato = 1;
		if(iniziato)
			printf("%d", bin[i]);
	}

	return 0;
}