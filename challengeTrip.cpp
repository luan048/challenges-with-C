#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
	
	char name[50];
	int age;
	int ticketNumber;
	char inputAssistency[4];
	bool assistency;
	
	printf("Nome do Passageiro: ");
	scanf("%s", &name);
	
	printf("Idade do Passageiro: ");
	scanf("%d", &age);
	
	printf("Digite o numero do bilhete: ");
	scanf("%d", &ticketNumber);
	
	printf("Precisa de assistencia? ");
	scanf("%s", &inputAssistency);
	
	if(age < 18) {
		printf("Passageiro nao pode embarcar por ser menor de idade!");
	}
	else {
		if(strcmp(inputAssistency, "sim") == 0) {
			assistency = true;
		}
		else if (strcmp(inputAssistency, "nao") == 0) {
			assistency = false;
		}
		
		printf("Passageiro liberado para embarque!\n");
		printf("%s\n", name);
		printf("%d\n", age);
		printf("%d\n", ticketNumber);
		printf("%s\n", assistency ? "sim" : "nao");
	}
	
	return 0;	
}
