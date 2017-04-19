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

void read_ints(const char* file_name);
void print_map();

main()
{
	char filename[8] = "map.txt";
	read_ints(filename); 
	print_map();
}

void read_ints (const char* file_name)
{
	FILE* file = fopen (file_name, "r");
	int i, j, k;
	i = 0;
	j = 0;
	k = 0;

	fscanf (file, "%d", &i);    
	while (!feof (file))
	{ 		 
		map[j][k] = i;
		j++;
		if(j == (width -1)){
			k++;
			j = 0;
		}
		fscanf (file, "%d", &i);      
	}
	fclose (file);        
}
void print_map(){
	int i, j;
	for( i = 0; i < width; i++){
		for( j = 0; j < height; j++){
			printf("%i ", map[i][j]);
		}
		printf("\n");
	}
}






