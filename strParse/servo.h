#ifndef SERVO_H
#define SERVO_H
#define SERVOS_NUMBER 6
int servoEvent(int servos[SERVOS_NUMBER], int eventType, char* eventData);
int pattern(int servos[SERVOS_NUMBER], char* eventData);
int custom(int servos[SERVOS_NUMBER], char* eventData);
#endif