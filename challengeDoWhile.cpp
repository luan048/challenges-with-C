#include <stdio.h>

int main() {
	
	int escolha;
	
	do {
		printf("Menu Opcoes\n");
		printf("Opcao 1\n");
		printf("Opcao 2\n");
		printf("Opcao 3\n");
		printf("Opcao 4\n");
		printf("Opcao 0/ sair do progrma\n");
	
		printf("Escolha uma opcao: ");
		scanf("%d", &escolha);
		
		switch(escolha) {
			case 1:
				printf("Voce escolheu a opcao 1\n");
				break;
			case 2:
				printf("Voce escolheu a opcao 2\n");
				break;
			case 3:
				printf("Voce escolheu a opcao 3\n");
				break;
			case 4:
				printf("Voce escolheu a opcao 5\n");
				break;
			case 0:
				printf("Voce saiu do programa\n");
				break;
			default:
				printf("Opcao nao existe...");
		}
		
	}while (escolha != 0);
	
	return 0;
}
