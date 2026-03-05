#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
Mario takes a height param and then generates a mario like prymid using astricks
printing it to the consol. height can only be an integer, in addition the height
cant excced 9998 as it will cause a mem overflow and crash the program



*/



void mario(int height){
    char level[1000] = "*";
    char brick[] = "*";

    for(int i = 0; i <height; i++){
        printf("%*s  ",height,level);
        printf("%s\n",level);
        strcat(level,brick);
    }

}   

int main(){
    char matrix[11][11];
    char point = '*';
    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 11;j++){
            if (((i-5)*(i-5) + (j-5)*(j-5)) == 25){
                matrix[i][j] = point;

            } else {
                matrix[i][j] = '-';
            }
        }
    }

    for (int i = 0; i < 11; i++) {
        // Inner loop to iterate through columns
        for (int j = 0; j < 11; j++) {
            printf("%c ", matrix[i][j]);
        }
        // Print a newline character after each row to format as a grid
        printf("\n");
    }
    
    return 0;
}