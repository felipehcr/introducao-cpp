#include <stdio.h>
#include <stdlib.h>

int main(){
	int cont;
	
	float maior_salario, soma_salario, num, media_salarial;
	
	maior_salario = 0; soma_salario = 0;
	
	for(cont=1; cont<=5; cont++){
		printf("Digite o salario dos funcionarios: \n");
		scanf("%f", &num);
		soma_salario = soma_salario+num;
		if(num>maior_salario){
			maior_salario = num;
		}
	}
	
	media_salarial = soma_salario/5;
	
	printf("A media salarial eh: %.2f. ", media_salarial);
	printf("\nO maior salario eh: %.2f. ", maior_salario);
	system("pause");
	
	return 0;

}
