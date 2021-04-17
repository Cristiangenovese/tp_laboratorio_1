int suma (float A, float B, float* resultado){


	*resultado = A + B;

	return 0;
	}

int resta (float A, float B, float* resultado){

	*resultado = A - B;

	return 0;
}

int division (float A, float B, float* resultado){

	int banderaDeCero = 0;

	if (B != 0){
		*resultado = (float)A / B;
	}
	else{
		banderaDeCero = 1;
	}
	return banderaDeCero;
}

int multiplicacion (float A, float B, float* resultado){

	*resultado = A * B;

	return 0;
}

int factorial (float X,int* resultado){

	int acumulador = 1;
	int banderaFactorial = 0;
	int auxiliar;
	float resto;

	auxiliar = X;

	resto = X - auxiliar;

	if(resto == 0){
		if(auxiliar > -1){
			for (int i = auxiliar; i > 0; i--){
				acumulador *= i;
			}
		}
		else{
			banderaFactorial = 1;
		}
	}
	else{
		banderaFactorial = 1;
	}

	*resultado = acumulador;

	return banderaFactorial;
}

