int suma (int A, int B, int* resultado){

	*resultado = A + B;

	return 0;
	}

int resta (int A, int B, int* resultado){

	*resultado = A - B;

	return 0;
}

int division (int A, int B, float* resultado, int* banderadeCero){

	*banderadeCero = 0;

	if (B != 0){
		*resultado = (float)A / B;
		*banderadeCero = 0;
	}
	else{
		*banderadeCero = 1;
	}
	return 0;
}

int multiplicacion (int A, int B, int* resultado){

	*resultado = A * B;

	return 0;
}

int factorial (int X, int* resultado){

	int acumulador = 1;

	for (int i = X; i > 0; i--){
		acumulador *= i;
	}

	*resultado = acumulador;

	return 0;
}

