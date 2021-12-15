#include "string.h"

int my_strlen(char *s){
	if(s == NULL) return -1;
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

int str2upper(char *s){
	if(s == NULL) return -1;
    int count = 0, i = 0;
	
    while(s[i] != '\0'){
        if(s[i] >= 97 && s[i] <= 122) {
            s[i] -= 32;
            count++;
        }
        i++;
    }
    return count;
}

int str2lower(char *s){
	if(s == NULL) return -1;
    int count = 0, i = 0;
    while(s[i] != '\0'){
        if(s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
            count++;
        }
        i++;
    }
    return count;
}

int str_strip_numbers(char*s){
	if(s == NULL) return -1;
    int size = my_strlen(s);
    int count = 0;
    for(int i = 0; i<size; i++){
        if((s[i] >= 48) && (s[i] <= 57)) {
            for(int j = i; j<size; j++){
                s[j] = s[j+1];
            }
            count++;
            i--;
        }
    }
    return size - count;
}

void my_strcpy(char *d,char *s){
	int i;
	for(i=0; s[i] != '\0'; i++){
		d[i] = s[i];
	}
	d[i] = '\0';
}

int my_strcmp (char *s, char *d){
	int sizes = my_strlen(s);
	int sized = my_strlen(d);
	int size = (sizes>sized)?sizes:sized;
	int value = 0;
	for(int i=0; i<size; i++){
		if(s[i] < d[i]){
			value = -(i+1);
			break;
		}
		else if(s[i] > d[i]){
			value = i+1;
			break;
		}
	}
	return value;
}

char * my_strdupl(char *s){
	int size = my_strlen(s);
	if(s == NULL) return NULL;
	char *b = (char *) malloc((size+1) * sizeof(char));
	int i;
	for(i=0; i<size; i++){
		b[i] = s[i];
	}
	b[size] = '\0';
	return b;
}

char *my_strcat(char *dest, const char *src){

}