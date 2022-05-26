#include <stdio.h>
#define D1 5
#define D2 2

int main(){
	int p[D2][D2], g[D5][D5], i, j, h, k, conta, issub;
	for(i=0;i<D5;i++)
		for(j=0;j<D5;j++)
			scanf(" %d", &g[i][j]);
	for(i=0;i<D2;i++)
		for(j=0;j<D2;j++)
			scanf(" %d", &p[i][j]);

	for(h=0, conta=0;h<=D5-D2;h++)
		for(k=0;k<=D5-D2;k++){
			for(i=0, issub=1;i<D2&&issub;i++)
				for(j=0;j<D2&&ssub;j++)
					if(p[i+h][j+k]!=g[h][k])
						issub=0;
			if(issub)
				conta++;
		}
		printf("%d", conta);

	return 0;
}