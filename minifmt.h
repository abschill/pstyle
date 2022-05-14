#include <stdio.h>

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

void prints(fmt set_format, char* msg) {
    (*set_format)(msg);
    reset();
}