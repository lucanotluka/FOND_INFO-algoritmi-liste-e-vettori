#include <stdio.h>
#define DIM 5
#define SDIM 3

int main(){
	int m[DIM][DIM], i, j, h, k, ismax;

	for(i=0;i<DIM;i++)
		for(j=0;j<DIM;j++)
			scanf(" %d", &m[i][j]);

	for(i=0;i<DIM;i++)
		for(j=0;j<DIM;j++)
		{
			for(h=-SDIM/2, ismax=1; h<=SDIM/2 && ismax; h++)
				for(k=-SDIM/2; k<=SDIM/2 && ismax; k++)
					if(i+h>=0 && i+h<DIM && 
						j+k>=0 && j+k<DIM && 
						m[i+h][j+k]>m[i][j])
							ismax=0;
			if(ismax)
				printf("[%d][%d] = %d\n", i, j, m[i][j]);
		}

	return 0;
}