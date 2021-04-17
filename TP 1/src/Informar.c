#include <stdio.h>
#include <stdlib.h>



void infomarResultados (float ressuma,float resresta, float resdivision, float resmultiplicacion, long long int resfactorialdeA, long long int resfactorialdeB, int retDivision, int retFactorialA,int retFactorialB){

	system("cls");

	printf("\nEl resultado de A + B es : %.2f\n",ressuma);

	printf("\nEl resultado de A - B es : %.2f\n\n",resresta);


	if(!retDivision){
		printf("\nEl resultado de A / B es : %.2f\n",resdivision);
	}
	else{
		printf("\nNo es posible dividir por cero\n");
	}

	printf("\nEl resultado de A * B es : %.2f\n",resmultiplicacion);

	if(!retFactorialA && !retFactorialB){
		printf("\nEl factorial de A es: %lli y el factorial de B es: %lli\n", resfactorialdeA, resfactorialdeB);
	}
	else{
		if(retFactorialA && !retFactorialB){
			printf("\nEl factorial de A es: No se pudo realizar y el factorial de B es: %lli \n", resfactorialdeB);
		}
		else{
			if(!retFactorialA && retFactorialB){
				printf("\nEl factorial de A es: %lli y el factorial de B es: No se pudo realizar\n", resfactorialdeA);
			}
			else{
				printf("\nEl factorial de A es: No se pudo realizar y el factorial de B es: No se pudo realizar\n");
			}
		}
	}

	printf("\n\n");
	system("pause");
}
