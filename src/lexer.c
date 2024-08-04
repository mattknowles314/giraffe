#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 64

bool isDelimeter(char chr) {
    return (chr == ' ' || chr == '+' || chr == '-' ||
            chr == '*' || chr == '/' || chr == '.' ||
            chr == ';' || chr == '%' || chr == '<' ||
            chr == '>' || chr == '=' || chr == '(' ||
            chr == ')' || chr == '[' || chr == ']' ||
            chr == '{' || chr == '}');
}

bool isOperatior(char chr) {
    return (chr == '+' || chr == '-' || chr == '*' ||
            chr == '/' || chr == '<' || chr == '>' ||
            chr == '=');
}

bool isKeyword(char* str) {
    const char* keywords[] = {
        "int",
        "float",
        "str",
        "if",
        "elif"
    };
    for (int i = 0; i < sizeof(keywords)/sizeof(keywords[0]); i++) {
        if (strcmp(str, keywords[i] == 0)) {
                return true;
        }
    }
    return false;
}

int main(){
    return(1);
}

