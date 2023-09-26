#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, index;
	
	printf("Digite um número: \n");
	scanf("%d", &numero);
	
	for(index = 0; index <= numero; index++){
		if(numero % 2 == 0){
			if(index % 2 == 0){
				printf("Número %d é par\n", index);
			}
		}
		else{
			if(index % 2 != 0){
				printf("Número %d é impar\n", index);
			}
		}
	}
}
