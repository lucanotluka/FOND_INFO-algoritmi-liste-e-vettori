#include <stdio.h>
#include <string.h>

#define MAXR 100

int main(int argc, char *argv[]){
	FILE *fp;
	int rows, totC, maxC, avgC, maxLen, i, curr, len;
	char str[MAXR+1], maxStr[MAXR+1];

	if(argc == 2){
		fp = fopen(argv[1], "r");
		if(fp){
			rows = 0;
			totC = 0;
			maxC = 0;
			maxLen = 0;

			fgets(str, MAXR+1, fp);
			while(!feof(fp)){
				rows++;
				for(i = 0, curr = 0, len = 0; str[i] != '\0'; i++, curr++, len++){
					if(str[i] == ' ')
						curr--;
				}
				totC += i-1;

				if(curr > maxC)
					maxC = curr;
				if(len > maxLen){
					maxLen = len;
					strcpy(maxStr, str);
				}
				fgets(str, MAXR+1, fp);
			}
			avgC = totC / rows;
			printf("Righe: %d\nTotC: %d\nMaxC e AvgC: %d - %d\nStringa lunga:\n%s\n", 
				rows,totC,maxC,avgC,maxStr);

			fclose(fp);
		} else
			printf("Errore apertura file\n");
	} else
		printf("Errore argomenti\n");

	return 0;
}