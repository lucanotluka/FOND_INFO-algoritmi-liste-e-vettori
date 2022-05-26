#include <stdio.h>
#define DIM 10

int main(){
	int v[DIM], i, sommasx, tot, bari;

	sommasx=0;
	tot=0;
	for(i=0;i<DIM;i++){
		scanf(" %d", &v[i]);
		tot+=v[i];
	}

	for(i=0, bari=-1;i<DIM&&bari==-1;i++)
	{
		sommasx+=v[i];
		tot-=v[i];
		if(sommasx==tot)
			bari=i;
	}

	printf("\n%d\n", bari);

	return 0;
}