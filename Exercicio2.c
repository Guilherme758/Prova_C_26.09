#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	char opcao;
	int opcao_valida = 0;

	do{
		fflush(stdin);
		printf("Digite uma opção: \n");
		printf("a. Cadastrar \n");
		printf("b. Buscar \n");
		printf("c. Atualizar \n");
		printf("d. Excluir \n");
		printf("e. Sair \n");
		scanf("%c", &opcao);
		
		switch(opcao){
			case 'a':
				printf("Você escolheu a opção Cadastrar!\n");
				opcao_valida = 1;
				break;
			case 'b':
				printf("Você escolheu a opção Buscar!\n");
				opcao_valida = 1;
				break;
			case 'c':
				printf("Você escolheu a opção Atualizar!\n");
				opcao_valida = 1;
				break;
			case 'd':
				printf("Você escolheu a opção Excluir!\n");
				opcao_valida = 1;
				break;
			case 'e':
				printf("Você escolheu a opção Sair!\n");
				opcao_valida = 1;
				break;
			default:
				printf("\nDigite uma opção válida!\n\n");
				opcao_valida = 0;
		}
	}while(opcao_valida == 0);
}
