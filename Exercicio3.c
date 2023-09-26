#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int opcao, numero1, numero2;
	
	printf("1. Multiplicação\n");
	printf("2. Divisão\n\n");
	
	printf("Escolha uma opcao\n");
	scanf("%d", &opcao);
	
	while(opcao < 1 || opcao > 2){
		printf("Digite uma opção válida\n");
		
		printf("Escolha uma opção\n");
		scanf("%d", &opcao);
	}
	
	printf("Digite o número 1\n");
	scanf("%d", &numero1);
	
	printf("Digite o número 2\n");
	scanf("%d", &numero2);
	
	if(opcao == 1){
		printf("Resultado é: %d\n", numero1 * numero2);
	}
	else{
		if(numero2 == 0){
			printf("Não é possível fazer divisão por zero\n");
		}
	}
}
