#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		if(num!=0 && num!=9){
			if(num%2==0)
			{
				printf("Seu sucessor eh: %d \n", num+1);	
			}
			else
			{
				printf("Seu antecessor eh: %d \n", num-1);	
			}
		}
	}
	while(num!=0 && num!=9);
	
	system("pause");
	
	
}
