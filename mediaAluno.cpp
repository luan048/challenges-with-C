#include <stdio.h>

int main() {
	
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float nota5;
	
	printf("Digite a nota1\n");
	scanf("%f", &nota1);
	
	printf("Digite a nota2\n");
	scanf("%f", &nota2);
	
	printf("Digite a nota3\n");
	scanf("%f", &nota3);
	
	printf("Digite a nota4\n");
	scanf("%f", &nota4);
	
	printf("Digite a nota5\n");
	scanf("%f", &nota5);
	
	float media = (nota1 + nota2 + nota3 + nota4 + nota5)/5;
	
	printf("Media do aluno foi de: %2.f",media);
	
	return 0;
	
}
