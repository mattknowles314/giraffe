#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 64

bool isDelimiter(char chr) {
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
        "elif",
        "else"
    };
    for (int i = 0; i < sizeof(keywords)/sizeof(keywords[0]); i++) {
        if (strcmp(str, keywords[i]) == 0) {
                return true;
        }
    }
    return false;
}

bool isInteger(char* str) {
    if (str == NULL || *str == '\0') {
        return false;
    }
    int i = 0;
    while (isdigit(str[i])) {
        i++;
    }
    return str[i] == '\0';

}

bool isValidInteifier(char* str) {
    return (str[0] != '0' && str[0] != '1' && str[0] != '2'
            && str[0] != '3' && str[0] != '4'
            && str[0] != '5' && str[0] != '6'
            && str[0] != '7' && str[0] != '8'
            && str[0] != '9' && !isDelimiter(str[0])); 
}

char* getSubstring(char* str, int start, int end) {
    int length = strlen(str);
    int subLength = end - start + 1;
    char* subStr = (char*)malloc((subLength + 1) * sizeof(char));
    strncpy(subStr, str + start, subLength);
    subStr[subLength] = '\0';
    return(subStr);
}

int main() {
    return(0);
}
    

