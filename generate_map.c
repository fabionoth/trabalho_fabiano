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



void validations(int _argc, char* _argv[]){
    if(_argc < 3){
        print_error(1);
    }   
    if (!isdigit(_argv[1]) || !isdigit(_argv[2]) || !isdigit(_argv[3])){
        print_error(2);
    }   
}

void print_error(int _code){

           switch(_code){
                    case 1:
                        printf("Error: Number of arguments is invalid");
                        break;
                    case 2:
                        printf("Error: Invalid Arguments");
                        break;
                    default:
                        printf("ERROR: {no message}");
                        break;
           }       
  }



int main(int argc, char argv[]){

    validations(argc, argv[argc + 1]);

    int i;
    for (i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}

