#include "stringHandling.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

//gcc -c stringHandling.c -std=c99 -lm

const int sizeArrayChars = 27;

char capitalSize[] = {'A', 'B', 'C', 'D', 'E',
					  'F', 'G', 'H', 'I', 'J', 
					  'K', 'L', 'M', 'N', 'O',
				      'P', 'Q', 'R', 'S', 'T',
					  'U', 'V', 'X', 'Z', 'W', 
					  'K', 'Y'};

char smallSize[] = {'a', 'b', 'c', 'd', 'e',
					'f', 'g', 'h', 'i', 'j', 
					'k', 'l', 'm', 'n', 'o',
				    'p', 'q', 'r', 's', 't',
					'u', 'v', 'x', 'z', 'w', 
					'k', 'y'};

String copyString(String s1, String s2) {
	return strcpy(s1, s2);
}

int stringSize(String string) {
	return strlen(string);
}

String intToString(int integer) {
	int stringSize = log10(integer) + 1;
	String string = (String) malloc(sizeof(stringSize));
	sprintf(string, "%d", integer);
	return string;
}
//string to integer
int stringToInt(String string) {
	return strtol(string, NULL, 10);
}

boolean isCapitalChar(char c) {
	if((c >= 'A') && (c <= 'Z'))
		return true;
	return false;
}

boolean isSmallChar(char c) {
	if((c >= 'a') && (c <= 'z'))
		return true;
	return false;
}

boolean isChar(char c) {
	if(isSmallChar(c) || isCapitalChar(c))
		return true;
	return false;
}

int checkOccurence(String string, char c) {
	int size = stringSize(string);
	int times = 0;
	for(int i = 0; i < size; i++)
		if(c == string[i]) 
			times++;
	return times;
}

char getCapitalChar(char c) {
	if(isCapitalChar(c))
		return c;
	for(int i = 0; i < sizeArrayChars; i++)
		if(smallSize[i] == c)
			return capitalSize[i];
}

 /*
char getSmallChar(char c) {
	if(isSmallChar(c))
		return c;
	for(int i = 0; i < sizeArrayChars; i++) {
		if(capitalSize[i] == c)
			return smallSize[i];
	}
} */

//String getCapitalSize(String string) {return toupper(string);}