// Write a C program using for loops to display the following pattern on the screen
//
// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
// *

#include <stdio.h>
int main(void){
	int i,j;
	
	for(i=1; i<7; i++){
		for(j=1; j<i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=7; i>1; i--){
		for(j=1; j<i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
