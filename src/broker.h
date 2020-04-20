/*
 * broker.h
 *
 *  Created on: 19 abr. 2020
 *      Author: utnso
 */

#ifndef BROKER_H_
#define BROKER_H_

#include <commons/collections/queue.h>


typedef struct{
	t_queue*  cola;
	t_list* suscriptores;
} colaMensajes;

void iniciarHilos();
void iniciarColas();
void* suma (void * par);
void iniciarCampos(colaMensajes* cc);


#endif /* BROKER_H_ */
