/*
 * mensajeUDP.c
 *
 *  Created on: 29 nov 2023
 *      Author: Usuario
 */

#include <stdio.h>
#include <string.h>
#include "mensajeUDP.h"

mensajeUDP pideMensajeUDP(void) {
	mensajeUDP men;

	puts("Direccion IP: ");
	fflush(stdin);
	fflush(stdout);
	fgets(men.ipOrigen, MAXIP, stdin);
	men.ipOrigen[strlen(men.ipOrigen)-1]='\0';


	puts("Longitud (Kb): ");
	fflush(stdout);
	scanf("%d", &(men.longitud));

	puts("Núm Datagramas: ");
	fflush(stdout);
	scanf("%d", &(men.numDatagramas));

	do {
		puts("Porcentaje Redundancia (entre 0 y 1): ");
		fflush(stdout);
		scanf("%f", &(men.porcenRedundancia));
	} while (men.porcenRedundancia<=0 || men.porcenRedundancia>1);

	return men;
}

void muestraMensajeUDP(mensajeUDP mensaje) {

	printf("\nDireccción IP: %s",mensaje.ipOrigen);
	printf("\nLongitud/datagrama: %d Kb",mensaje.longitud);
	printf("\nNum. Datagramas: %d", mensaje.numDatagramas);
	printf("\nPorcentaje Redundancia: %.2f %%", mensaje.porcenRedundancia*100);

}


float longitudMensajePlano(mensajeUDP mensaje) {
	return mensaje.longitud*mensaje.numDatagramas-(mensaje.longitud*mensaje.numDatagramas)
			*mensaje.porcenRedundancia;
	//return  mensaje.longitud*mensaje.numDatagramas*(1-mensaje.porcenRedundancia);
}
