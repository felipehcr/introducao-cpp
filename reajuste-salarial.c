#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario, maiorsal, percreaj, salarioreaj;
	int cont;
	maiorsal=0;
	
	printf("Percentual de reajuste salarial: ");
	scanf("%f", &percreaj);
	
	for(cont=1; cont<=5; cont++){
		printf("\nInforme o salario do funcionario: \n");
		scanf("%f", &salario);
		salarioreaj=salario+(salario*percreaj/100);
		printf("O salario reajustado eh: %.2f \n", salarioreaj);
		if(salarioreaj>maiorsal)
			maiorsal=salarioreaj;
	}
	printf("\nO mair salario reajustado eh: %.2f ", maiorsal);
	system("pause");
	
	return 0;
}
