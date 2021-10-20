#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createIntArray(int** arr, int size);
void populateArray(int* arr, int size);
void printArray(int* arr, int size);

int main(){
	
	int size;
	char str[10];
	printf("Please enter number: \n");
	scanf("%s", str);
	size = atoi(str);

	int* intArray;

	createIntArray(&intArray, size);
	populateArray(intArray, size);
	printArray(intArray, size);
	free(intArray);
	return 0;
}

void createIntArray(int** arr, int size){
	*arr = (int*)malloc(sizeof(int)*size);
}

void populateArray(int* arr, int size){
	int i;
	*(arr)=1;
	
	for(i = 1; i < size; i++){
		*(arr+i) = *(arr+i-1)*2; 	
	}
}

void printArray(int* arr, int size){
	int i;

	for( i = 0; i < size; i++ ){
		printf("%d\n", *(arr+i));
	}
}
