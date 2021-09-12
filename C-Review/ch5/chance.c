#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned int iterations;
	unsigned int side1;
	unsigned int side2;
	unsigned int side3;
	unsigned int side4;
	unsigned int side5;
	unsigned int side6;

	iterations = 700000000;

	side1 = 0;
	side2 = 0;
	side3 = 0;
	side4 = 0;
	side5 = 0;
	side6 = 0;
	
	while( iterations != 0 ){
		switch( (rand() % 6) + 1 ){
			case 1:
			side1 = side1+1;
			break;
			
			case 2:
			side2 = side2+1;
			break;

			case 3:
			side3 = side3+1;
			break;
			
			case 4:
			side4 = side4+1;
			break;
		
			case 5:
			side5 = side5+1;
			break;

			case 6:
			side6 = side6+1;
			break;
			
						
		}

		iterations = iterations - 1;
	}
	
	printf("1: %13u\n", side1);
	printf("2: %13u\n", side2);
	printf("3: %13u\n", side3);
	printf("4: %13u\n", side4);
	printf("5: %13u\n", side5);
	printf("6: %13u\n", side6);

}
