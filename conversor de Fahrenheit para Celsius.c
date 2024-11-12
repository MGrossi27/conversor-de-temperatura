#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float fahrenheit, celsius;
	printf("Digite a temperatura em Fahrenheit e transformarei em Celsius:\nF= ");
	scanf("%f", &fahrenheit);
	celsius = ((fahrenheit - 32) / 9) * 5;
	printf("O valor em graus Celsius da temperatura digitada em Fahrenheit é de %.1f°C", celsius);
	return 0;
}
