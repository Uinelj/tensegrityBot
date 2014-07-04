#include "servo.h"
#define SERVOS_NUMBER 6
int servoEvent(int servos[SERVOS_NUMBER], int eventType, char* eventData){ 
	// A terme on filera aussi le servoBlock.
	/*
	eventType: Type d'évènement : pattern préenregistré ou custom.
	char* eventData: Numéro du pattern ou données à balancer aux servos. (?)
	*/
	switch(eventType){
		case 1: //pattern
			pattern(servos, eventData);
			return 1;
		case 2: //custom
			custom(servos, eventData);
			return 1;
		default:
			return -1;
		}
}
int pattern(int servos[SERVOS_NUMBER], char* eventData){
	/*Oscill, linear, delay-based.. TBD*/
	return 0; 
}
int custom(int servos[SERVOS_NUMBER], char* eventData){
	/*Trouver une façon de communiquerdce façon cool. */
	return 0;
}