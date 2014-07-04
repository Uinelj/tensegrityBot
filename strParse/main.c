/* Les patterns c'est une idée cool. 
Le truc ça serait de faire une fonction pattern qui renvoie un truc ( ou qui exécute un pattern ) 
sur un nombre variable de servos. */
#define SERVOS_NUMBER 6
#include <stdio.h>
#include "servo.h"

int main(int argc, char const *argv[])
{
	int i;
	char* string = "abcdef";
	for (i = 0; string[i] != '\0' ; ++i)
	{
		printf("%c\n", string[i]);
	}
	return 0;
}

