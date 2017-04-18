/*
 *
 * OpenFlood gamming Map.
 * Homework for Algorithims UFPR2017
 * Author Fabio Noth
 *
 * Inputs: 
 * --map.txt
 * --For each interation on map enter number of color. 
 * Outputs: 
 * --Number of interations
 *
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define DEBUG 1
#define LARGURA 4
#define ALTURA 4


int main(){
    
   readFile('map.txt');
    
}

char*  readFile(char *fileName){
    FILE *file = fopen(fileName, "r");
    char *code;
    size_t n = 0;
    int c;

    if (file == NULL)
        return NULL; //could not open file

    code = malloc(1000);

    while ((c = fgetc(file)) != EOF)
    {
        code[n++] = (char) c;
        printf("%c",c);
    }

    // don't forget to terminate with the null character
    code[n] = '\0';        

    return code;
}
