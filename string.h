#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Function that receives a string as a parameter and returns the length of that string
In case of null pointer, the function will return -1 */

int my_strlen(char *s);
/*----------------------------------------------------------------------------------------------------------------*/

/*Converts all small characters in a string to upper case characters and returns the number of changed characters
In case of null pointer, the function will return -1*/

int str2upper(char *s);
/*----------------------------------------------------------------------------------------------------------------*/

/*Converts all capital characters to lower case characters in string and returns the number of changed characters
In case of null pointer, the function will return -1*/

int str2lower(char *s);
/*----------------------------------------------------------------------------------------------------------------*/

/*removes all occurrences of numbers, Function returns new length of the string
In case of null pointer, the function will return -1*/

int str_strip_numbers( char *s);
/*----------------------------------------------------------------------------------------------------------------*/

/*Function that will copy the content of string s to string d*/

void my_strcpy(char *d,char *s);
/*----------------------------------------------------------------------------------------------------------------*/

/*Function that will compare two strings together. Function returns place (n) of first different character 
    -n if s is ordered before in alphabet that d (starting 1)
    0 if strings are equal
    +n if d is ordered before s*/

int my_strcmp (char *s, char *d);
/*----------------------------------------------------------------------------------------------------------------*/

/*Creates a duplicate of a string s and returns a pointer to newly created string
In case of null pointer, the function will return NULL*/

char * my_strdupl(char *s);
/*----------------------------------------------------------------------------------------------------------------*/