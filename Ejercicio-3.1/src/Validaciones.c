#include <stdio.h>
int validarFlotante(float numero, float* pResultado){

	int retorno = -1;

	if(pResultado != NULL && numero == (float)numero ){
		*pResultado = numero;
		retorno = 0;
	}


	return retorno;
}

