// sample 3-3
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char name[30];
	char aff[40];
	char grade[4];
	struct node *next;
} node;

int main(){
	node *a, *head;
	head = (node*)malloc(sizeof(node));
	a = head;
	while(scanf("%s %s %s", a->name, a->aff, a->grade) != EOF){
		a->next = (node*)malloc(sizeof(node));
		a = a->next;
	}
	a->next = NULL;

	a = head;
	while(1){
		if(a->next == NULL){
			break;
		}else{
			printf("name: %s\naffiliation: %s\ngrade: %s\n\n", a->name, a->aff, a->grade);
			a = a->next;
		}
	}
}
