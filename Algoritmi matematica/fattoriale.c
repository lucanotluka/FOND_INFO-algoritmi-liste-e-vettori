#include <stdio.h>

int main(){
	int n, i, f;

	do
		scanf("%d\n", &n);
	while(n<0);

	f=1;//fattoriale
	i=2;//contatore

	while(i<=n){
		f=f*i;
		i=i+1;
	}

	printf("%d", f);

	return 0;
}