/*
 ============================================================================
 Name        : UF1288_ApellidosNombre_EJ1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "mensajeUDP.h"
int main(void) {

	mensajeUDP men;
	float total;

	puts("Introduce un dato de mensaje:");
	men=pideMensajeUDP();

	puts("EL mensaje tiene los siguientes datos");
	muestraMensajeUDP(men);

	total=longitudMensajePlano(men);

	printf("\nEl mensaje provieniente de la IP %s tiene un total de %.2f Kb",
			men.ipOrigen, total);


	return EXIT_SUCCESS;
}
