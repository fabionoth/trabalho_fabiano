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
#define DEBUG 1

int *intvar;



int isNumeric (const char * s);

int main(int argc, char *argv[]){
    
    // validations

    int i, j, width, height, num_colors;
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

    width =  (int)strtol(argv[1], (char **)NULL, 10);
    height = (int)strtol(argv[2], (char **)NULL, 10);
    num_colors = (int)strtol(argv[3], (char **)NULL, 10);

    if(DEBUG){
        printf("Width: %i \n", width);
        printf("Height: %i \n", height);
        printf("Number of Colors: %i \n", num_colors);
    }


    FILE * fp = fopen("map.txt", "ab+");
    
    for(i = 0; i < width; i++){
        for(j = 0; j < height; j++){
            int randvalue = rand() % (num_colors + 1);
            fprintf(fp," %i ", randvalue);
        }
        fputs("\n", fp);
    }
    fclose(fp);





}




int isNumeric (const char * s){
    if (s == NULL || *s == '\0' || isspace(*s))
        return 0;
    char * p;
    strtod (s, &p);
    return *p == '\0';
}
