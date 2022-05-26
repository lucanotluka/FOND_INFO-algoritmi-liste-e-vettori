#include <stdio.h>

typedef struct{
	int n,d;
}fraz_t;

void stampa(fraz_t*);
void leggi(fraz_t*);
void semplifica(fraz_t*);

int main(){
	fraz_t frazione;
	leggi(&frazione);
	stampa(&frazione);
	semplifica(&frazione);
	stampa(&frazione);
	return 0;
}

void stampa(fraz_t *frazione)
{
	printf("\nFrazione: %d/%d\n", (*frazione).n, (*frazione).d);
}

void leggi(fraz_t *frazione)
{
	scanf(" %d", &frazione->n);
	do
		scanf(" %d", &frazione->d);
	while(frazione->d==0);
}

void semplifica(fraz_t *f)
{
	int segno, MCD;
	segno=0;
	if((f->d)<0){
		segno=1;
		f->d=-f->d;
	}
	if((f->n)<0){
		segno=!segno;
		f->n=-f->n;
	}

	if(f->d < f->n)
		MCD=f->d;
	else
		MCD=f->n;

	while(f->n%MCD||f->d%MCD)
		MCD--;

	f->n/=MCD;
	f->d/=MCD;
	if(segno)
		f->n=-f->n;
}
