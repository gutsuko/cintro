// sample 3-3
#include <stdio.h>
#include <stdlib.h>

typedef struct person{
	char name[30];
	char email[40];
} personData;

typedef struct company{
	personData ceo;
	personData employees[100];
} companyData;

int main(){
	companyData c;
	int i = 0;
	int n;
	scanf("%s %s", c.ceo.name, c.ceo.email);
	while(scanf("%s %s", c.employees[i].name, c.employees[i].email) != EOF){
		i++;
		n = i;
	}
	printf("ceo\n");
	printf("name:%s email:%s\n", c.ceo.name, c.ceo.email);
	printf("employees\n");
	for(i = 0; i < n; i++){
		printf("name:%s email:%s\n", c.employees[i].name, c.employees[i].email);
	}
}
