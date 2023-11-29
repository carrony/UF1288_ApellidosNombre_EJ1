/*
 * mensajeUDP.h
 *
 *  Created on: 29 nov 2023
 *      Author: Usuario
 */

#ifndef MENSAJEUDP_H_
#define MENSAJEUDP_H_
#define MAXIP 17

typedef struct {
	char ipOrigen[MAXIP];
	int longitud;
	int numDatagramas;
	float porcenRedundancia;
} mensajeUDP;


mensajeUDP pideMensajeUDP(void);

void muestraMensajeUDP(mensajeUDP mensaje);

float longitudMensajePlano(mensajeUDP mensaje);

#endif /* MENSAJEUDP_H_ */
