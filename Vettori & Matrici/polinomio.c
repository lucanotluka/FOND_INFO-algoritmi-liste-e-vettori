#include <stdio.h>
#define MAXG 8

int main(){
	int poli[MAXG+1], grado, i, x, val, potx;

	do
		scanf(" %d", &grado);
	while(grado<0||grado>MAXG);

	for(i=0; i<=grado; i++)
		scanf(" %d", &poli[i]);

	scanf(" %d", &x);

	for(i=0, val=0, potx=1; i<=grado; i++)
	{
		//val += qualcosa è come dire = val + qualcosa
		val = val + potx*poli[i];
		potx = potx*x;	
	}
	printf("%d\n", val);
	return 0;
}