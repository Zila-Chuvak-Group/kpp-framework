#ifndef K++_H_INCLUDED
#define K++_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
void wlog(char arr[]) {
    FILE *log = fopen("prog.log", "a");
    fprintf(log, "Progress ended, status:%s\n", arr);
    printf("log made\n cheak prog.log");
}
void clog() {
    FILE *log = fopen("prog.log", "w");
    fprintf(log, "------PROGRAMM LOG------\n");
    printf("log clean\n");
}
void pas() {
    printf("\n");
    system("pause");
}

void p(char arr[]) {
    printf("%s" , arr);
    if(arr = "Cola" ) {
        printf("Subscibe to @negrmkishev in Tiktok!");
    }
}

void po(char arr[]) {
    printf("%s\n" , arr);
}

void calc(int num, int num2, char arr[]) {
    int num3;
    float num4;
    if(arr == "+") {
        num3 = num + num2;
        printf("%d\n", num3);
    }else if(arr == "-") {
        num3 = num - num2;
        printf("%d\n", num3);
    }else if (arr = "*") {
        num3 = num * num2;
        printf("%d\n", num3);
    }else if (arr = "/") {
        num4 = num / num2;
        printf("%f\n", num4);
    }else if(arr = "%") {
        num4 = num % num2;
        printf("%f\n", num4);
    }
void ubc(int f, int g) {
    int v;
    if(f > g) {
        v = f;
        printf("%d", v);
    }
    if(f < g) {
        v = g;
        printf("%d", v);
    }

}



}





#endif // K++_H_INCLUDED
