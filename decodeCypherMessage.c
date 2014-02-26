/* Luke Welna
2-25-14
in lab 7
*/

#include <stdlib.h>
#include <stdio.h>

void assignToChar();

int main(){
assignToChar();
return 0; 
}

/*
Reads in integers from a text file, takes those values and gives them 
an associated char.
*/
void assignToChar(){
int positionInArray = 0; 
File *readInInt = fopen("cipher.txt", "r");

int anIntCypher[26];
char itsCharCounterpart[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 
'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 
'w', 'x', 'y', 'z'};
int tempArrayNum;

fscanf();
	while(fscanf(readInInt, "%d, ",&tempArrayNum) == 1){ 
	anIntCypher[positionInArray] = tempArrayNum;
	positionInArray++;
	}
	/*This is temporary for testing thats why im using i and not a 3 word variable*/
	for(int i = 0;  i < 26; i++){  
	printf("Position &i = %i", i,&anIntCypher[i]);
	}
	
	
}

/*To write out to a file just use fopen but instead of "r" use "w"  */