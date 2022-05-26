#include <stdio.h>
#include <stdlib.h>

typedef struct nodo_{
	int num;
	nodo_ *next;
}nodo_t;

int main(){
	nodo_t *head, *tmp;
	int n;
	
	head = tmp = NULL;
	scanf(" %d", &n);
	while(n>0)
	{
		tmp = malloc(sizeof(nodo_t));
		if(tmp)
		{
			tmp->num = n;
			tmp->next = head;
			head = tmp;
		} else
			printf("Errore nell'allocazione tmp\n");
		scanf(" %d", &n);
	}
	for(tmp = head; tmp; tmp = tmp->next)
		printf("%d\n", tmp->num);

	/* for(; head; tmp = head, head = head->next)
		free(tmp); */
	
	while(head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

	return 0;
}
