#include <stdio.h>
#include <stdlib.h>

#include "Calculadora.h"
#include "Menu.h"
#include "Informar.h"
#include "Validaciones.h"

void menu (void){

	int flagSalir;
	int flagDivisionporCero;
	int flagPrimeroOperando;
	/*int flagSegundoOperando;
	int flagCalculos;
	int flagInformarResultados;*/
	int x;
	int y;
	int opcion;
	int resSuma;
	int resResta;
	float resDivision;
	int resMultiplicacion;
	int resfactorialA;
	int resfactorialB;

	flagSalir = 0;
	flagPrimeroOperando = 0;

	while (!flagSalir){

		printf("1- Ingresar el 1er operando (A)\n");
		printf("2- Ingresar el 2do operando (B)\n");
		printf("3- Calcular todas las operaciones \n");
		printf("4- Informar los resultados \n");
		printf("5- Salir \n\n");
		printf("Seleccione una opcion: ");
		scanf("%i", &opcion);
		printf("\n");

		switch (opcion){

		case 1:

			printf("Ingrese 1er operando: ");
			fflush(stdin);
			scanf("%i", &x);

			validacionPrimerOperando (&x, &flagPrimeroOperando);

			printf("numero ingresado %i", x);

			printf("\n");
				break;

		case 2:

			printf("Ingrese el 2do operando: ");
			fflush(stdin);
			scanf("%i", &y);
			printf("\n");
				break;

		case 3:

			suma(x, y, &resSuma);
			resta(x, y, &resResta);
			division(x, y, &resDivision, &flagDivisionporCero);
			multiplicacion(x, y, &resMultiplicacion);
			factorial(x, &resfactorialA);
			factorial(y, &resfactorialB);
			printf("\nCalculos realizados\n");
				break;

		case 4:

			infomarResultados (resSuma, resResta, resDivision, flagDivisionporCero, resMultiplicacion, resfactorialA, resfactorialB);
				break;

		case 5:

			flagSalir = 1;
			break;

		default:

			break;
		}
	}
}

