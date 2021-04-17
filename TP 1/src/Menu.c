#include <stdio.h>
#include <stdlib.h>

#include "Calculadora.h"
#include "Informar.h"

void menu (void){

	int flagSalir;
	int flagPrimeroOperandoValidacion;
	int flagSegundoOperandoValidacion;
	int flagCalculos;
	int retornoDivision;
	int retornoFactorialA;
	int retornoFactorialB;
	int opcion;
	float x;
	float y;
	float resSuma;
	float resResta;
	float resDivision;
	float resMultiplicacion;
	int resfactorialA;
	int resfactorialB;

	flagSalir = 0;
	flagPrimeroOperandoValidacion = 0;
	flagSegundoOperandoValidacion = 0;
	flagCalculos = 0;

	while (!flagSalir){

		if(!flagPrimeroOperandoValidacion){
		printf("1- Ingresar el 1er operando (A) = x\n");
		}
		else{
		printf("1- Ingresar el 1er operando (A) = %.2f\n",x);
		}

		if(!flagSegundoOperandoValidacion){
			printf("2- Ingresar el 2do operando (B) = y\n");
		}
		else{
			printf("2- Ingresar el 2do operando (B) = %.2f\n",y);
		}

		printf("3- Calcular todas las operaciones \n");
		printf("4- Informar los resultados \n");
		printf("5- Salir \n\n");
		printf("Seleccione una opcion: ");
		scanf("%i", &opcion);
		fflush(stdin);

		switch (opcion){

		case 1:

			flagPrimeroOperandoValidacion = 0;

			printf("\nIngrese 1er operando: ");
			fflush(stdin);

			while(!flagPrimeroOperandoValidacion){

				if(scanf("%f",&x)==1){
					flagPrimeroOperandoValidacion = 1;
					fflush(stdin);
					break;
				}

				printf("\nError... Reingrese numero\n\n");
				printf("\nIngrese 1er operando: ");
				fflush(stdin);
			}

			printf("\n");
				break;

		case 2:

			if(flagPrimeroOperandoValidacion){

				flagSegundoOperandoValidacion = 0;

				printf("\nIngrese el 2do operando: ");
				fflush(stdin);

				while(!flagSegundoOperandoValidacion){

					if(scanf("%f",&y)==1){
						flagSegundoOperandoValidacion = 1;
						fflush(stdin);
						break;
					}

					printf("\nError... Reingrese numero\n\n");
					printf("\nIngrese 2do operando: ");
					fflush(stdin);
				}
			}
			else{
				printf("\nDebe ingresar el primer numero\n");
			}

			printf("\n");
				break;

		case 3:

			if(flagPrimeroOperandoValidacion && flagSegundoOperandoValidacion){
				suma(x, y, &resSuma);
				resta(x, y, &resResta);
				retornoDivision = division(x, y, &resDivision);
				multiplicacion(x, y, &resMultiplicacion);
				retornoFactorialA = factorial(x, &resfactorialA);
				retornoFactorialB = factorial(y, &resfactorialB);

				printf("\nCalculos realizados\n\n");

				flagCalculos = 1;
			}
			else{
				if(!flagPrimeroOperandoValidacion && !flagPrimeroOperandoValidacion){
					printf("\nDebe ingresar primero los numeros a calcular\n\n");
				}
				else{
					if(!flagPrimeroOperandoValidacion){
						printf("\nDebe ingresar el primer operando\n\n");
					}
					else{
						printf("\nDebe ingresar el segundo operando\n\n");
					}
				}
			}
			break;

		case 4:

			if(flagCalculos){
			infomarResultados (resSuma, resResta, resDivision, resMultiplicacion, resfactorialA, resfactorialB, retornoDivision, retornoFactorialA, retornoFactorialB);

			flagPrimeroOperandoValidacion = 0;
			flagSegundoOperandoValidacion = 0;
			flagCalculos = 0;

			}
			else{
				printf("\nDebe realizar los calculos primero\n");
			}


			break;

		case 5:

			flagSalir = 1;
			break;

		default:

			printf("\n\nDato invalido...\n\n");
			fflush(stdin);

			break;
		}
		opcion = 0;
	}
}
