#include <stdio.h>
int main(){
	int n, i, primo;
	//primo lo uso come var. logica
	scanf("%d\n", &n);

	while(n<2){	//la condizione per uscire è n>2
		printf("ERROR\n");
		scanf("%d\n", &n);
	}

	i=2;//il primo N utilizzabile è 2
	primo=1;//all'inizio, assumiamo sia primo

	while(i*i<=n && primo){ //aggiungo un FLAG
		if(n%i==0)			//i*i<=n rappresenta		
			primo=0;		//l'ultimo numero che
		i=i+1;				//moltiplicato per sè, dà
	}						// n. E' la sua radice quadra
	printf("%d\n", primo);
	return 0;
}