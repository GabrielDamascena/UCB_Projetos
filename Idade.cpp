//informar a idade!
//0-3 -> bebê
//4-10 -> criança
//11-17 -> adolescente
//18-40 -> adulto
//41-60 -> adulto 2
//61 ... -> idoso

#include <stdio.h>
int main(){
	
	int idade;
	
	printf("Digite a idade: \n");
	scanf("%i", &idade);
	
	if(idade <= 0){
		printf("Digite uma idade valida!");
	} else if(idade <= 3){
		printf("Bebe");
	}else if(idade <= 10){
		printf("Crianca");
	} else if(idade <= 17){
		printf("Adolescente");
	} else if(idade <= 40){
		printf("Adulto");
	} else if(idade <= 60){
		printf("Adulto 2");
	} else if(idade >= 61){
		printf("Idoso");
	} 
	
	
	return 0;
}
