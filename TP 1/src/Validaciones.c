#include <stdio.h>
#include <stdlib.h>


#include "Calculadora.h"
#include "Menu.h"
#include "Informar.h"


int validacionPrimerOperando (int* A, int* BanderadeValidacion){

	while(!BanderadeValidacion){
		if(scanf("%i", &A)==1){
			*BanderadeValidacion = 1;
		}
		fflush(stdin);

		printf("Error... Reingrese numero");
	}
	return 0;
}
