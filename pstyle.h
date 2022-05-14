#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define str(r) r

typedef void (*fmt)(char*);

void reset() {
    printf("\033[0;37m");
}

void red(char* m) {
    printf("\033[0;31m%s", m);
}

void green(char* m) {
    printf("\033[0;32m%s", m);
}

void yellow(char* m) {
    printf("\033[0;33m%s", m);
}

void blue(char* m) {
    printf("\033[0;34m%s", m);
}

void purple(char* m) {
    printf("\033[0;35m%s", m);
}

void cyan(char* m) {
    printf("\033[0;36m%s", m);
}

void fmts(fmt set_format, char* msg) {
    (*set_format)(msg);
    reset();
}

void fmtsln(fmt set_format, char* msg) {
    (*set_format)(msg);
    reset();
    printf("\n");
}

void fmtn(fmt set_format, int code) {
    char *astr;
    astr = malloc(sizeof(code));
    sprintf(astr, "%d", str(code));
    (*set_format)(astr);
    reset();
    free(astr);
}

void fmtnln(fmt set_format, int code) {
    char *astr;
    astr = malloc(sizeof(code));
    sprintf(astr, "%d", str(code));
    (*set_format)(astr);
    reset();
    printf("\n");
    free(astr);
}