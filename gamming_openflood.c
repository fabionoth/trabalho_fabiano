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
#define width 10
#define height 10

int map[width][height];

void read_map(const char* file_name);
void print_map();

main()
{
	char filename[8] = "map.txt";
	read_map(filename); 
	print_map();
}

void read_map (const char* file_name)
{
	FILE* file = fopen (file_name, "r");
	int i, j, k;
	i = 0;
	j = 0;
	k = 0;

	fscanf (file, "%d", &i);    
	while (!feof (file))
	{ 
		if(j == width)
		{
			j = 0;
			k++;
		}		
		map[k][j] = i;
		j++;
		fscanf (file, "%d", &i);    
	}
	fclose (file);        
}
void print_map()
{
	int k, j;
	for( k = 0; k < width; k++)
	{
		for( j = 0; j < height; j++)
		{
			printf("%i ", map[k][j]);
		}
		printf("\n");
	}
}






