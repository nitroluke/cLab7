/* 
Luke Welna
2-25-14
lab 07
*/

#include <stdio.h>
char itsCharCounterpart[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int anIntCypher[26] = { }; /* changed this to type enum, could cause problems */
int sizeOfMessage = 14;
void assignToChar();
void decodeTheMessage();

int main(){
assignToChar();
return 0;
}

/*
reads in a text file and adds that to an array called anIntCypher[].
*/
void assignToChar(){
int positionInArray = 0;
FILE *readInInt = fopen("cypher.txt", "r");
int tempArrayNum = 0;;

	while(fscanf(readInInt, "%d, ", &tempArrayNum) == 1){
	anIntCypher[positionInArray] = tempArrayNum;
	positionInArray++;
	}

/*using i instead of three words because this is for testing
int i = 0;

	for(i; i<26; ++i){
	printf("The address of anIntCypher[%i] = %i\n", i, &anIntCypher[i]);
	printf("               anIntCypher[%i] = %i\n", i, anIntCypher[i]);
	}
*/
decodeTheMessage();
}

void decodeTheMessage(){
int tempArrayNum = 0;
/* int messageToDecode[] = { }; */
int positionInArray = 0;
FILE *readInMessage = fopen("messages.txt", "r");
FILE *writeOutMessage = fopen("decode.txt", "w");

if(!(readInMessage && writeOutMessage)){
printf("failed to open files\n");
exit(-1); /* This will exit the program for testing */
}

int isScanInt = 1;
	while(isScanInt != 0){ /*changed this from -1 to 0 */
	isScanInt = fscanf(readInMessage, "%d", &tempArrayNum);

		if(isScanInt == 0){  
		puts("isScanInt == 0");
		fscanf(readInMessage, "%c");
		}else{
		printf("tempArrayNum = %i\n", tempArrayNum); 
		/* messageToDecode[positionInArray] = tempArrayNum; */
		/*fprintf(writeOutMessage, "%c" , itsCharCounterpart[tempArrayNum]);*/
		}
	}


/*	int thisIsCounter = 0;
	for(thisIsCounter; thisIsCounter < sizeOfMessage; thisIsCounter++){
	printf(itsCharCounterpart[messageToDecode[thisIsCounter]]); 
	fscanf
	}
*/
}
