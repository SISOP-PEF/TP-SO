/*
 ============================================================================
 Name        : brokerSO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "broker.h"

colaMensajes appearedPokemon,
			 newPokemon,
			 caughtPokemon,
			 catchPokemon,
			 getPokemon,
			 localizedPokemon;

int hiloTest1, hiloTest2, hiloTest3, hiloTest4, hiloTest5, hiloTest6;
pthread_t hiloT1, hiloT2, hiloT3, hiloT4, hiloT5, hiloT6;


void *procesoLoco (void *arg)
{
	char *texto = (char *) arg;
	printf (texto);
}

int main(void) {
	iniciarColas();
	//iniciarHilos();
	 pthread_t hiloT1;
	 hiloTest1 = pthread_create(&hiloT1, NULL, &procesoLoco, "Hilo creado");
	 pthread_join(hiloT1, NULL);

	return EXIT_SUCCESS;
}

void iniciarColas(){
	iniciarCampos(&appearedPokemon);
	iniciarCampos(&newPokemon);
	iniciarCampos(&caughtPokemon);
	iniciarCampos(&catchPokemon);
	iniciarCampos(&getPokemon);
	iniciarCampos(&localizedPokemon);
}

//void iniciarHilos(){
//		void * par = malloc(sizeof(void*));
//		hiloTest1 = pthread_create(&hiloT1, NULL, &procesoLoco, "Hilo Creado");
//		/hiloTest2 = pthread_create(&hiloT2, NULL, suma, (void) arg);
//		hiloTest3 = pthread_create(&hiloT3, NULL, suma, (void*) arg);
//		hiloTest4 = pthread_create(&hiloT4, NULL, suma, (void*) arg);
//		hiloTest5 = pthread_create(&hiloT5, NULL, suma, (void*) arg);
//		hiloTest6 = pthread_create(&hiloT6, NULL, suma, (void*) arg);
//*/
//		pthread_join(hiloT1, NULL);
///*		pthread_join(hiloT2, NULL);
//		pthread_join(hiloT3, NULL);
//		pthread_join(hiloT4, NULL);
//		pthread_join(hiloT5, NULL);
//		pthread_join(hiloT6, NULL);*/
//}
	void iniciarCampos(colaMensajes* cc){
	cc->cola = malloc(sizeof(t_queue));
	cc->suscriptores = malloc(sizeof(t_list));
}
