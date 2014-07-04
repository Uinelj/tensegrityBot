#include <Servo.h>
#define SERVO_NUMBER 6

const int firstPwmPin = 2;
const int initval = 700; //Neutral value for the servos' position.
int potPin = A0;
int potVal;
Servo servo[SERVO_NUMBER];

void setup()
{
        Serial.begin(9600);
	for(int i=0; i<SERVO_NUMBER; i++){
			    servo[i].attach(firstPwmPin+i);
			    servo[i].writeMicroseconds(initval);
			}
        delay(5000);	
        Serial.println("Setup done.");	
}

void loop()
{
 potVal = analogRead(A0);
 Serial.println(potVal);
 pattern(6, potVal);
}

int strParse(char* string){
	int i, val; /* n, p opposes, o rien changer*/
        int nval = 700;
        int pval = 2300;
	for (i = 0; string[i] != '\0' ; ++i)
	{
		if(string[i] != 'n' && string[i] != 'p' && string[i] != 'o'){ //Error.
			return -1;
		}
        if(string[i]=='n'){
        	val=nval;
                
        }
        if(string[i]=='p'){
        	val=pval;
            
        }
        if(string[i]!='o'){
          servo[i].writeMicroseconds(val);
        }    
	}
	return 1;
}                  

int pattern(int number, int customDelay){ //TODO: taille des groupes en paramètre.
	switch(number){
		case 1: //Serpent idiot. 
			strParse("pooooo");
			delay(customDelay);
			strParse("opoooo");
			delay(customDelay);
			strParse("oopooo");
			delay(customDelay);
			strParse("ooopoo");
			delay(customDelay);
			strParse("oooopo");
			delay(customDelay);
			strParse("ooooop");
			delay(customDelay);
                        strParse("ooooon");
                        delay(customDelay);
			strParse("oooono");
			delay(customDelay);
			strParse("ooonoo");
			delay(customDelay);
			strParse("oonooo");
			delay(customDelay);
			strParse("onoooo");
			delay(customDelay);
                        strParse("nooooo");
			break;
		case 2://Contraction progressive. 
			strParse("pooooo");
			delay(customDelay);
			strParse("ppoooo");
			delay(customDelay);
			strParse("pppooo");
			delay(customDelay);
			strParse("ppppoo");
			delay(customDelay);
			strParse("pppppo");
			delay(customDelay);
			strParse("pppppp");
			delay(customDelay);
			strParse("pppppo");
			delay(customDelay);
			strParse("ppppoo");
			delay(customDelay);
			strParse("pppooo");
			delay(customDelay);
			strParse("ppoooo");
			delay(customDelay);
			strParse("pooooo");
			delay(customDelay);
			strParse("nnnnnn");
			delay(customDelay);
                        break;
		case 3://Block3:Alterné
			strParse("pppnnn");
			delay(customDelay);
			strParse("nnnppp");
			delay(customDelay);
                        break;
		case 4://Block2: Alterné
			strParse("ppnnpp");
			delay(customDelay);
			strParse("nnppnn");
			delay(customDelay);
                        break;
		case 5://fastB2 + slowB4
			strParse("pppppp");
			delay(customDelay);
			strParse("nnoooo");
			delay(customDelay);
			strParse("oonnnn");
			delay(customDelay);
                        break;
                case 6:
                        strParse("pnpnpn");
			delay(customDelay);
                        strParse("npnpnp");
			delay(customDelay);
                        
                        
		}
}
