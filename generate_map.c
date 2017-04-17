/*
 *
 * OpenFlood map Generator
 * Homework for Algorithms  UFPR 2017
 * Author Fabio Noth
 *
 * Inputs:
 * int width , int height, int number_colors 
 * Outpus:
 * map.txt
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM_PARAM 3

int *intvar;



int isNumeric (const char * s);

int main(int argc, char *argv[]){
    
    // validations

    int i;
    if(argc != NUM_PARAM + 1){
        printf("error - inform all paramters\n");
        printf("Inform params - (width) (height) (number_colors)\n");
        return 0;
    }
    for(i = 0; i < argc -1; i++){
        if(!isNumeric(argv[i+1])){
            printf("error - verify all paramters are integers\n");
            printf("Inform params - (width) (height) (number_colors)\n");
            return 0;
        }    
    }

    FILE *fp = fopen("map.txt", "ab+");
    fprintf(fp, "this is test message... \n");
    fputs("This is testing for fputs... \n", fp);
    fclose(fp);
    




}




int isNumeric (const char * s){
    if (s == NULL || *s == '\0' || isspace(*s))
        return 0;
    char * p;
    strtod (s, &p);
    return *p == '\0';
}
