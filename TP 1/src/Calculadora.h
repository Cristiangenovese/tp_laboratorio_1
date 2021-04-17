#ifndef CALCULADORA_H_
#define CALCULADORA_H_

/*brief La funcion realiza la suma de los operandos pasados por valor y devuelve un resultado pasado por referencia
 * param1 Es el primer parametro pasado por valor que sera un operando para realizar el calculo
 * param2 Es el segundo parametro pasado por valor que sera el otro operando para realizar el calculo
 * param3 Es el tercer parametro pasado por referencia que sera el resutaldo de la operacion
 * return Si se logro la operacion devuelve 0
 * */

int suma (float A, float B, float* resultado);

/*brief La funcion realiza la resta de los operandos pasados por valor y devuelve un resultado pasado por referencia
 * param1 Es el primer parametro pasado por valor que sera un operando para realizar el calculo
 * param2 Es el segundo parametro pasado por valor que sera el otro operando para realizar el calculo
 * param3 Es el tercer parametro pasado por referencia que sera el resutaldo de la operacion
 * return Si se logro la operacion devuelve 0
 * */

int resta (float A, float B, float* resultado);

/*brief La funcion realiza la division de los operandos pasados por valor y devuelve un resultado pasado por referencia
 * param1 Es el primer parametro pasado por valor que sera un operando para realizar el calculo
 * param2 Es el segundo parametro pasado por valor que sera el otro operando para realizar el calculo
 * param3 Es el tercer parametro pasado por referencia que sera el resutaldo de la operacion
 * return Si se logro la operacion devuelve 0, y devuelve 1 si se ingresa un 0 en el segundo parametro
 * */

int division (float A, float B, float* resultado);

/*brief La funcion realiza la multiplicacion de los operandos pasados por valor y devuelve un resultado pasado por referencia
 * param1 Es el primer parametro pasado por valor que sera un operando para realizar el calculo
 * param2 Es el segundo parametro pasado por valor que sera el otro operando para realizar el calculo
 * param3 Es el tercer parametro pasado por referencia que sera el resutaldo de la operacion
 * return Si se logro la operacion devuelve 0
 * */

int multiplicacion (float A, float B, float* resultado);

/*brief La funcion realiza el factorial de los operandos pasados por valor y devuelve un resultado pasado por referencia
 * param1 Es el primer parametro pasado por valor que sera un operando para realizar el calculo
 * param2 Es el tercer parametro pasado por referencia que sera el resutaldo de la operacion
 * return Si se logro la operacion devuelve 0 y 1 en caso de que el operando ingresado sea de tipo float
 * */

int factorial (float X,int* resultado);

#endif /* CALCULADORA_H_ */
