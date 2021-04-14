#include <stdio.h>
#include <stdlib.h>

#include "Calculadora.h"
#include "Menu.h"

void infomarResultados (int suma,int resta, float division, int banderadeCero, int multiplicacion, int factorialdeA, int factorialdeB){

	system("cls");
	printf("\n El resultado de A + B es : %i\n",suma);
	printf("\n El resultado de A - B es : %i\n",resta);

	if (banderadeCero == 0){
		printf("\n El resultado de A / B es : %.2f\n",division);
	}
	else{
		printf("\n No es posible dividir por cero\n");
	}

	printf("\n El resultado de A * B es : %i\n",multiplicacion);

	printf("No se puede realizar factorial por numeros negativos");
	printf("\n El factorial de A es: %i y el factorial de B es: %i", factorialdeA, factorialdeB);
	printf("\n\n");
	system("pause");
}
