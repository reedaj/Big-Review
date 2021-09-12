
//Standard input output library
#include <stdio.h>
//Standard math library
#include <math.h>

/**	
*	
*	Math.h includes the following functions
*	sqrt ( x )	square root of x
*	cbrt ( x )	cube root of x
*	exp ( x )	exponential of x
*	log ( x )	log base e of x
*	log10( x ) 	Log base 10 of x
*	fabs ( x ) 	absolute value of x as floating point number
*	ceil ( x ) 	rounds x to the smallest integer not less than x
*	floor ( x )	rounds x to the largest integer not greater than x
*	pow ( x , y )	x raised to the power of y
*	fmod ( x , y )	remainder of x/y as a floating point number
*	sin ( x ) 	sine of x in radians
*	cos ( x )	cosine of x in radians
*	tan ( x )	tangent of x in radians
*
**/

/*
Function calls operate on a stack frame. When a function is called. 
When a function is called by another function, the currently running funciton is pushed onto a stack and the called function takes over.
It's called the stack frame and it's a LIFO structure.
*/

/*
We can create custom header files then include them with #include "name.h"
Each standard library has a corresponding header.
Some standard headers include:
assert.h	-	Diagnostic information for debugging.
ctype.h		-	Test characters for certain properties and function properties, and functions that can be used to convert upper/lowercase letters.
errno.h		-	Macros for reporting error conditions
float.h		-	Floating-point size limit information for the system
limits.h	-	INtegral size limits of the system
locale.h	-	Some complex stuff I need to review later
math.h		-	function prototyupes for math library fuynctions
signal.h	-	Function prototypes and macros for various conditions that arise during a program's execution
setjmp.h	-	Bypassing of the usual function call and return sequence
stdarge.h	-	macros for dealing with a list of arguments to a function whose number and types are unknown
stddef.h	-	Common type definitions used by C for performing calculations
stdio.h		-	Contains function prototypes for the standard i/o library functions, and information used by them.
stdlib.h	-	Prototypes for conversions of numbers to text and text to numbers, memory allocation, random numbers and other utility funcs.
string.h	-	String processing functions
time.h		-	Manipulating time and date	

*/

//Function prototype
int isPrime(int* num);
int isPrimeRec(int* num);
//Functions can pass information by value and by reference.
int isPrimeRec_(int* num, int check);

//Function headers should fit on one line
//IF your function prototype is taking several lines then you should find a way to decompose it into several smaller functions.

int main(){

	printf( "%2f \n", sqrt(900.0) );

	int primeNum = 5;
	printf("Is Prime Loop: %d \n", isPrime(&primeNum));	
	printf("Is Prime Rec : %d \n", isPrimeRec(&primeNum));
	return 0;
}

//Function declaration. CHeck if a number is prime
//Return 0 if not prime
//Return 1 if prime
int isPrime( int* num ){
	int number_to_check = *num;
	int scalar_index;
	scalar_index = 2;
	while( scalar_index != number_to_check ){
		if( fmod(number_to_check, scalar_index) == 0.0 ){
			return 0;
		}
		
		scalar_index = scalar_index + 1;
	}
	return 1;
}

int isPrimeRec(int* num){
	isPrimeRec_(num, 2);
}

int isPrimeRec_( int* num, int check){
	if( *num == check){
		return 1;
	} else if( fmod(*num, check)  == 0.0) {
		return 0;
	} else {
		isPrimeRec_(num, check+1);
	}
}
