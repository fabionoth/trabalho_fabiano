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
#define num_colors 4

int map[width][height];
int count;

void read_map(const char* file_name);
int print_map();
int read_integer();
int verify_integer(char *numArray);

main()
{
    count = 0;
    char filename[8] = "map.txt";
    read_map(filename); 
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
    print_map();
}
int print_map()
{
    int k, j, ret, number_comparing;
    ret = 0;
    number_comparing = map[0][0];
    for( k = 0; k < width; k++)
    {
        for( j = 0; j < height; j++)
        {
            printf("%i ", map[k][j]);
            if(number_comparing != map[k][j]){
                ret = 1;
            }
        }
        printf("\n");
    }
    return ret;
}

int read_integer()
{
    int start = 1;
    int ret = 0;
    char read[255];
    printf("Inform the value from %i to %i for map: ", start, num_colors);
    scanf("%s", &read);
    if(!verify_integer(read))
    {
        ret = (int)strtol(read, (char **)NULL, 10);
        if(ret < start || ret > num_colors)
        {
            read_integer();
        }
    }
    ret = (int)strtol(read, (char **)NULL, 10);
    return ret;
}

int verify_integer(char *numArray)
{
    int i;
    const int len = sizeof(numArray);

    for (i = 0; i < len; i++)
    {
        if (!isdigit(numArray[i]))
        {
            return 0;
        }
    }
    return 1;
}



