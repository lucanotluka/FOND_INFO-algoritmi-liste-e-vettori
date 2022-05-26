#include <stdio.h>
#define MAXS 100

int main(){
	char str[MAXS+1];
	int i, j, k, conta, ispal, len;

	scanf(" %[^\n]", str);

	for(len=0;str[len]!='\0';len++);

	for(i=2; i<=len; i++) /*i = lunghezza sottostringa palindroma*/
	{
		for(j=0, conta=0; j<=len-i; j++) /*j = traslatore*/
		{							
			for(k=0, ispal=1; ispal && k<i/2; k++)
				if(str[j+k] != str[j+i-1-k])	/* k = contatore per il	*/
					ispal=0; 					/* k-esimo elemento	fino alla metà */
			if(ispal)							/* della sottostringa */
			{
				conta++;
				for(k=0; k<i; k++)
					printf("%c", str[j+k]);
				printf("\n");
			}
		}
		printf("%d\n", conta);
	}
	return 0;
}