#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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
    mario(10);
    return 0;
}