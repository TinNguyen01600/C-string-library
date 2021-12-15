#include <stdio.h>
#include <assert.h>

#include "string.h"

int main(void)
{
char test_string[100];
char *d;
int i;

/*************************/
fprintf(stderr,"Strlen: ");
assert(my_strlen("abcdefghij.-!1234124")==20);
assert(my_strlen("abc")==3);

assert(my_strlen("")==0);
assert(my_strlen("a")==1);
assert(my_strlen(0)==-1);

fprintf(stderr,"Ok\n");

/*************************/
fprintf(stderr,"Strcmp: ");
assert(my_strcmp("hei","hei")==0);
assert(my_strcmp("a","a")==0);
assert(my_strcmp("a","b")==-1);
assert(my_strcmp("b","a")==1);
assert(my_strcmp("","")==0);
assert(my_strcmp("abcdd","abcd")==5);
assert(my_strcmp("abcdsadf","abcddasdf")==5);
assert(my_strcmp("abcde","abcdf")==-5);
assert(my_strcmp("abcdeasdf","abcdfasdf")==-5);
assert(my_strcmp("abcd","abc")==4);
assert(my_strcmp("aaa","aaab")==-4);
assert(my_strcmp("abcd","abcdd")==-5);

fprintf(stderr,"Ok\n");

/*************************/
fprintf(stderr,"Strcpy: ");
my_strcpy(test_string,"Hello");
assert(my_strcmp(test_string,"Hello")==0);
my_strcpy(test_string,"");
assert(my_strcmp(test_string,"")==0);

my_strcpy(test_string,"H");
assert(my_strcmp(test_string,"H")==0);

fprintf(stderr,"Ok\n");

/*************************/
fprintf(stderr,"Str2upper & str2lower: ");

my_strcpy(test_string,"");
str2upper(test_string);
assert(my_strcmp(test_string,"")==0);

my_strcpy(test_string,"t");
str2upper(test_string);
assert(my_strcmp(test_string,"T")==0);

my_strcpy(test_string,"test");
str2upper(test_string);
assert(my_strcmp(test_string,"TEST")==0);

my_strcpy(test_string,"lEtS tRY");
str2upper(test_string);
assert(my_strcmp(test_string,"LETS TRY")==0);

my_strcpy(test_string,"te123..-_d,D--a");
str2upper(test_string);
assert(my_strcmp(test_string,"TE123..-_D,D--A")==0);
assert(str2upper(0)==-1);

/*************************/
my_strcpy(test_string,"");
str2lower(test_string);
assert(my_strcmp(test_string,"")==0);

my_strcpy(test_string,"TEST");
str2lower(test_string);
assert(my_strcmp(test_string,"test")==0);

my_strcpy(test_string,"tEsT");
str2lower(test_string);
assert(my_strcmp(test_string,"test")==0);

my_strcpy(test_string,"-TesT..-");
str2lower(test_string);
assert(my_strcmp(test_string,"-test..-")==0);
assert(str2lower(0)==-1);

fprintf(stderr,"Ok\n");

/*************************/
fprintf(stderr,"str_strip_numbers: ");

my_strcpy(test_string,"A1B2c3d4");
i=str_strip_numbers(test_string);
assert(my_strcmp(test_string,"ABcd")==0);
assert(i==4);

my_strcpy(test_string,"Abcd");
i=str_strip_numbers(test_string);
assert(my_strcmp(test_string,"Abcd")==0);
assert(i==4);

my_strcpy(test_string,"123456789");
i=str_strip_numbers(test_string);
assert(my_strcmp(test_string,"")==0);
assert(i==0);

my_strcpy(test_string,"");
i=str_strip_numbers(test_string);
assert(my_strcmp(test_string,"")==0);
assert(i==0);
fprintf(stderr,"Ok\n");


/*************************/
fprintf(stderr,"strdupl: ");

my_strcpy(test_string,"abcdefg");
d=my_strdupl(test_string);
assert(my_strcmp(test_string,d)==0);
assert(d!=test_string);

my_strcpy(test_string,"");
d=my_strdupl(test_string);
assert(my_strcmp(test_string,d)==0);
assert(my_strdupl(0)==NULL);

fprintf(stderr,"Ok\n");

/*************************/
fprintf(stderr,"strdcat: ");

char src_str[100], dest_str[100];
my_strcpy(dest_str,"This is a test ");
my_strcpy(src_str, "of strcat() function");

fprintf(stderr,"Ok\n");

/*************************/

fprintf(stderr,"\n All functions work perfectly\n");

return 0;
}
