#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	char opcao;
	int opcao_valida = 0;

	do{
		fflush(stdin);
		printf("Digite uma op��o: \n");
		printf("a. Cadastrar \n");
		printf("b. Buscar \n");
		printf("c. Atualizar \n");
		printf("d. Excluir \n");
		printf("e. Sair \n");
		scanf("%c", &opcao);
		
		switch(opcao){
			case 'a':
				printf("Voc� escolheu a op��o Cadastrar!\n");
				opcao_valida = 1;
				break;
			case 'b':
				printf("Voc� escolheu a op��o Buscar!\n");
				opcao_valida = 1;
				break;
			case 'c':
				printf("Voc� escolheu a op��o Atualizar!\n");
				opcao_valida = 1;
				break;
			case 'd':
				printf("Voc� escolheu a op��o Excluir!\n");
				opcao_valida = 1;
				break;
			case 'e':
				printf("Voc� escolheu a op��o Sair!\n");
				opcao_valida = 1;
				break;
			default:
				printf("\nDigite uma op��o v�lida!\n\n");
				opcao_valida = 0;
		}
	}while(opcao_valida == 0);
}
