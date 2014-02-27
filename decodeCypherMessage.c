/* 
Luke Welna
2-25-14
lab 07
*/

#include <stdio.h>
char itsCharCounterpart[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int anIntCypher[26]; 
int sizeOfMessage = 14;
typedef enum {pizza, soda, bread} food;
 
void assignToChar();
void decodeTheMessage();
void extraCredit1(food);

int main(){
assignToChar();
extraCredit1(pizza);
return 0;
}

/*
reads in a text file and adds that to an array in its corresponding position, called anIntCypher[].
*/
void assignToChar(){
int positionInArray = 0;
FILE *readInInt = fopen("cypher.txt", "r");
int tempArrayNum = 0;;

	while(fscanf(readInInt, "%d, ", &tempArrayNum) == 1){
	anIntCypher[tempArrayNum] = positionInArray;
	positionInArray++;
	}
decodeTheMessage();
}

/*
This function reads in integers from the message file and prints out its character value based on the cypher used above
also prints out my variable tempArrayNum
*/
void decodeTheMessage(){
int tempArrayNum = 0;
int positionInArray = 0;
FILE *readInMessage = fopen("message.txt", "r");
FILE *writeOutMessage = fopen("decode.txt", "w");
/*
if(!(readInMessage && writeOutMessage)){
printf("failed to open files\n");
exit(-1); //This will exit the program for testing 
}
*/
int isScanInt = 1;
	while(isScanInt != -1){ /*changed this from -1 to 0 */
	isScanInt = fscanf(readInMessage, "%d", &tempArrayNum);

		if(isScanInt == 0){  
		puts("we skipped a comma \n");
		fscanf(readInMessage, "%c");
		}else if(isScanInt == 1){
		printf("tempArrayNum = %i\n", tempArrayNum);  
		fprintf(writeOutMessage, "%c" , itsCharCounterpart[anIntCypher[tempArrayNum]]);
		positionInArray++;
		}
	}
}

void extraCredit1(food somethingSortaTasty){
switch(somethingSortaTasty){
	case pizza: puts("pizza");
	break;
	case soda: puts("soda");
	break;
	case bread: puts("bread");
	break;
	default: puts("Que?");
	break;
}
}
