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
#define width 4
#define height 4


int map[width][height];

void readfile();
void printmap();
int main(){
    readfile();
    printmap();
}


void readfile(){
    int c;
    FILE *file;
    file = fopen("map.txt", "r");
    if(file){
        while ((c = getc(file)) != EOF){
            int i, j;
            i = 0;
            j = 0;
            if(isdigit(c)){
		if(DEBUG){
                    printf("%c", c);
            	}
                map[i][j] = c - '0';
                i++;
            }

            int compar_value = 10; // 10 is \n in acsii encoding
            if(c == compar_value){
                j++;
                i = 0;
            } 
        }
        fclose(file);
    }   
}

void printmap(){
    int i,j;
    for(i = 0; i < width; i++){
        for(j = 0; j < height; j++){
	    printf("%i", map[i][j]);
	}
	printf("\n");    
    }
}



















