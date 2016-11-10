# stringHandling_c

##To compile and get .o file
### gcc -c stringHandling.c -std=c99 -lm

Available functions:

##boolean isChar(char c); 
###heck if it is char

##boolean isCapitalChar(char c);
###Check if it is capital char

##boolean isSmallChar(char c);
###Check if it is small char  

##int checkOccurence(String string, char c); 
###Check how many 'char' there are

##int stringSize(String string);
###Return the string size

##char getCapitalChar(char c);
###Make it capital 

##char getSmallChar(char c); 
###Make it small 

##String getCapitalSize(String string);
###Make it in capital size

##String getSmallSize(String string); 
###Make it in small size 

##String copyString(String s1, String s2);
###Copy the s2 in s1

##String intToString(int integer);
###Parses an integer into a string

##int stringToInteger(String string);
###Parses a intring in a integer

##boolean isEqual(String, String); 
###Compare to strings (1: true, 0: false)