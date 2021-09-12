#include <stdio.h>


enum Foods{ APPLE, ORANGE, CHIP, FISH=32, BEEF };
//Enumerations are used to classify. We can set their values as well.
//They start off at 0 and increment by 1.
//APPLE=0, ORANGE=1, ect.

int main(){
	enum Foods food;
	printf("Apple %d Orange %d Chip %d Fish %d Beef %d\n", APPLE, ORANGE, CHIP, FISH, BEEF);
}
