#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int opcao, numero1, numero2;
	
	printf("1. Multiplica��o\n");
	printf("2. Divis�o\n\n");
	
	printf("Escolha uma opcao\n");
	scanf("%d", &opcao);
	
	while(opcao < 1 || opcao > 2){
		printf("Digite uma op��o v�lida\n");
		
		printf("Escolha uma op��o\n");
		scanf("%d", &opcao);
	}
	
	printf("Digite o n�mero 1\n");
	scanf("%d", &numero1);
	
	printf("Digite o n�mero 2\n");
	scanf("%d", &numero2);
	
	if(opcao == 1){
		printf("Resultado �: %d\n", numero1 * numero2);
	}
	else{
		if(numero2 == 0){
			printf("N�o � poss�vel fazer divis�o por zero\n");
		}
	}
}
