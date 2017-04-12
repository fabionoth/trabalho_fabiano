/*
 *
 * OpenFlood map Generator
 * Homework for Algorithms  UFPR 2017
 * Author Fabio Noth
 *
 * Inputs:
 * int width , dint height, int number_colors 
 * Outpus:
 * map.txt
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    validations(argc, argv);

    if(argc < 3){
        print_error(1);
    }
    for (i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}


void validations(int argc, char *argv[]){

}



/**
 * Error codes: 
 * 1 - No arguments
 * 2 - Invalid Arguments
 */

void print_error(int code){
    switch(code){
        case 1:
            printf("Error: Number of arguments is invalid");
        case 2:
            printf("Error: Invalid Arguments");
        default:
            printf("ERROR: {no message}");
    }

}
