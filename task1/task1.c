#include <stdio.h>
#include "task1.h"
#include <ctype.h>

void str_lower(char str[],char buffer[]){
    size_t i = -1;
    char c;
    while ((c = buffer[i++]) != 0) {
        buffer[i] = tolower(str[i]);
        //printf("%c from %c\n", buffer[i], str[i]);
        //printf("next is %c in str\n", str[i+1]);
    }
    buffer[i+1] = '\0';
}

void str_lower_mutate(char str[]){
    for(size_t i = 0; i < sizeof(str); i++) {
        str[i] = tolower(str[i]);
    }
    //printf("this: %s\n", str);
}