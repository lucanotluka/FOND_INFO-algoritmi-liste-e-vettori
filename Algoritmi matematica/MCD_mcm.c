#include <stdio.h>

int main(){
	int a, b, MCD, mcm, i, flag_mcm, flag_MCD;
	scanf("a: %d\n b: %d", &a, &b);
	//mcm è minimo comune multiplo, tra 2 e 3 l'mcm è 6
	//MCD è il massimo comune divisore, tra 2 e 4 è 2.
	if(a>b)
	{
		i=b;
		b=a;
		a=i;
	}
	i=0;
	flag_mcm=0; //false, non trovato
	flag_MCD=0; //false, non trovato

	while(i<(a*b)-a || flag_mcm==0)
	{
		if((b+i)%b==0 && (b+i)%a==0)
		{
			mcm = b+i;
			flag_mcm = 1;
		}
		else
			i=i+1;
	}
	i=0;
	while(flag_MCD==0 || i>1)
	{
		if(a%i==0 && b%i==0){
			MCD=i;
			flag_MCD=1;
		}
		else	
			i=i-1;
	}
	printf("mcm: %d\n MCD: %d", mcm, MCD);
	return 0;
}
