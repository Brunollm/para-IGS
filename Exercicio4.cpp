//---------------------------------------------------------------------------------------------------------
/*
* @4
* Desenvolva a função a qual recebe dois valores de inteiros e que faça a todas as operacoes de ‘Bitwise’ e devolva o maior resultado
* entre eles.
*/
//---------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calcular_maximum_bitwise(int v1, int v2) {

	int maximum = v1 & v2;

	for (int i = v1; i < v2; i++)
		for (int j = i + 1; j <= v2; j++)
			maximum = calcular_maximum_bitwise(maximum, (i & j));


	return maximum;


}
int main() {
	int valor_1, valor_2, maior_valor;
	printf("Informe os valores.\n");
	scanf_s("%d %d", &valor_1, &valor_2);
	maior_valor = calcular_maximum_bitwise(valor_1, valor_2);

	printf("O maior valor e: %d .\n", maior_valor);

	return 0;
}
