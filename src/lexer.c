#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 64

bool isDelimeter(char chr) {
    return(chr == ' ' || chr == '+' || chr == '-' ||
            chr == '*' || chr == '/' || chr == '.' ||
            chr == ';' || chr == '%' || chr == '<' ||
            chr == '>' || chr == '=' || chr == '(' ||
            chr == ')' || chr == '[' || chr == ']' ||
            chr == '{' || chr == '}');
}

int main(){
    return(1);
}

