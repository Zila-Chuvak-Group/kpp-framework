#ifndef KPP_H_INCLUDED
#define KPP_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ОБЪЯВЛЕНИЯ (прототипы)
void wlog(char arr[]);
void clear_log();
void pas();
void p(char arr[]);
void po(char arr[]);
void calc(int num, int num2, char arr[]);
void ubc(int f, int g);   // ← объявление

// РЕАЛИЗАЦИИ (тела функций)
void wlog(char arr[]) {
    FILE *log = fopen("prog.log", "a");
    fprintf(log, "Progress ended, status:%s\n", arr);
    fclose(log);
    printf("log made\ncheck prog.log\n");
}

void clear_log() {
    FILE *log = fopen("prog.log", "w");
    fprintf(log, "------PROGRAM LOG------\n");
    fclose(log);
    printf("log cleaned\n");
}

void pas() {
    printf("\n");
    system("pause");
}

void p(char arr[]) {
    printf("%s", arr);
    if(strcmp(arr, "Cola") == 0) {
        printf("Subscribe to @negrmkishev in TikTok!");
    }
}

void po(char arr[]) {
    printf("%s\n", arr);
}

void calc(int num, int num2, char arr[]) {
    if(strcmp(arr, "+") == 0) {
        printf("%d\n", num + num2);
    }
    else if(strcmp(arr, "-") == 0) {
        printf("%d\n", num - num2);
    }
    else if(strcmp(arr, "*") == 0) {
        printf("%d\n", num * num2);
    }
    else if(strcmp(arr, "/") == 0) {
        if(num2 != 0) {
            printf("%.2f\n", (float)num / num2);
        } else {
            printf("Error: division by zero\n");
        }
    }
    else if(strcmp(arr, "%") == 0) {
        if(num2 != 0) {
            printf("%d\n", num % num2);
        } else {
            printf("Error: division by zero\n");
        }
    }
    else {
        printf("Unknown operation: %s\n", arr);
    }
}

// ← РЕАЛИЗАЦИЯ ubc (должна быть!)
void ubc(int f, int g) {
    if(f > g) {
        printf("%d\n", f);
    }
    else if(f < g) {
        printf("%d\n", g);
    }
    else {
        printf("Equal: %d\n", f);
    }
}

#endif // KPP_H_INCLUDED
