#include <stdio.h>
#define BASE 2

int pot(int a, int b);
int log2(int *ris, int x);

int main(){
	int num, flag, risultato;
	
	scanf(" %d", &num);
	
	flag=log2(&risultato, num);
	
	printf("\nPreciso: %d\nRisultato: %d\n", flag, risultato);

	return 0;
}

int pot(int a, int b){
	int pow;
	pow=1;
	while(b>0)
	{	
		pow = pow*a;
		b--;
	}
	return pow;
}

int log2(int *ris, int x){
	*ris=0;
	for(*ris=0;!pot(BASE, *ris+1)>x;(*ris)++);	/*while(!(pow(BASE,*ris+1)>x))
													(*ris)++;*/
	return (pot(BASE, *ris)==x); /*output 0 oppure 1*/ 
}