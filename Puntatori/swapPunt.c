#include <stdio.h>

int primo(int);
int input();

int main(){
	int n, i;
	n = input();

	for(i = 2; i <= n / 2; i++){		//si procede da entrambi gli estremi: i, e n-i
		if(primo(i) && primo(n - i))	//allora, se entrambi sono numeri primi
			printf("%d + %d\n", i, n - i); //la loro somma dà il ris. cercato
	}
	return 0;
}


int input(){
	int n;
	scanf("%d", &n);
	while(n <= 2 && n % 2)
	{
		printf("Non valido\n");
		scanf("%d", &n);
	}
	return n;
}

int primo(int n){
	int primo, i;

	for(i = 2, primo = 1; i * i <= n && primo; i++){
		if((n % i) == 0) //se il numero è divisibile per i senza resto
			primo = 0;	 //allora non è un numero primo
	}

	return primo;
}