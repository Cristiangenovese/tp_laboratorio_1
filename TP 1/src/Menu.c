#include <stdio.h>
#include <stdlib.h>

#include "Calculadora.h"
#include "Menu.h"
#include "Informar.h"

void menu (void){

	int flagSalir;
	int flagDivisionporCero;
	int flagFactorialPorNegativo;
	int flagFactorialPorFlotante;
	int flagPrimeroOperandoValidacion;
	int flagSegundoOperandoValidacion;
	int flagCalculos;
	int flagInformarResultados;
	int opcion;
	float x;
	float y;
	int resSuma;
	int resResta;
	float resDivision;
	int resMultiplicacion;
	int resfactorialA;
	int resfactorialB;

	flagSalir = 0;
	flagPrimeroOperandoValidacion = 0;
	flagSegundoOperandoValidacion = 0;

	while (!flagSalir){

		if(!flagPrimeroOperandoValidacion){
		printf("1- Ingresar el 1er operando (A) = x\n");
		}
		else{
		printf("1- Ingresar el 1er operando (A) = %f\n",x);
		}
		if(!flagSegundoOperandoValidacion){
			printf("2- Ingresar el 2do operando (B) = y\n");
		}
		else{
			printf("2- Ingresar el 2do operando (B) = %f\n",y);
		}
		printf("3- Calcular todas las operaciones \n");
		printf("4- Informar los resultados \n");
		printf("5- Salir \n\n");
		printf("Seleccione una opcion: ");
		scanf("%i", &opcion);


		switch (opcion){

		case 1:

			flagPrimeroOperandoValidacion = 0;

			printf("\nIngrese 1er operando: ");
			fflush(stdin);

			while(!flagPrimeroOperandoValidacion){

				if(scanf("%2.f",&x)==1){
					flagPrimeroOperandoValidacion = 1;
					fflush(stdin);
					break;
				}

				printf("\nError... Reingrese numero\n\n");
				printf("Ingrese 1er operando: ");
				fflush(stdin);
			}

			printf("\n");
				break;

		case 2:

			flagSegundoOperandoValidacion = 0;

			printf("\nIngrese el 2do operando: ");
			fflush(stdin);

			while(!flagSegundoOperandoValidacion){

				if(scanf("%2.f",&y)==1){
					flagSegundoOperandoValidacion = 1;
					fflush(stdin);
					break;
				}

				printf("\nError... Reingrese numero\n\n");
				printf("Ingrese 2do operando: ");
				fflush(stdin);
			}

			printf("\n");
				break;

		case 3:

			suma(x, y, &resSuma);
			resta(x, y, &resResta);
			division(x, y, &resDivision, &flagDivisionporCero);
			multiplicacion(x, y, &resMultiplicacion);
			factorial(x, &resfactorialA,flagFactorialPorNegativo,flagFactorialPorFlotante);
			factorial(y, &resfactorialB,flagFactorialPorNegativo,flagFactorialPorFlotante);
			printf("\nCalculos realizados\n");
				break;

		case 4:

			infomarResultados (resSuma, resResta, resDivision, flagDivisionporCero, resMultiplicacion, resfactorialA, resfactorialB);
				break;

		case 5:

			flagSalir = 1;
			break;

		default:

			printf("\n\nDato invalido...\n\n");
			fflush(stdin);

			break;
		}
	}
}

