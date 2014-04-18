#include <stdio.h>

#define WIDTH 3
#define HEIGHT 3
#define INAROW 3

int main( int argc, char* argv[] )
{
	//Initialize Variables
	int i, j;

	//Take in Input
	char grid[WIDTH][HEIGHT]; 
	
	for(i = 0; i < WIDTH; i++)
	{
		for(j = 0; j < HEIGHT; j++)
		{
			scanf("%c", &grid[i][j]);	
		}
		scanf("\n");
	}

	for(i = 0; i < WIDTH; i++)
	{
		for(j = 0; j < HEIGHT; j++)
		{
			printf("%c", grid[i][j]);	
		}
		printf("\n");
	}

	//PrintGrid(grid);	

	return 0;
}

/**
void PrintGrid(char grid[][])
{
	//Initialize Varialbes
	int i, j;
	
	//Print out Grid
	for(i = 0; i < WIDTH; i++)
	{
		for(j = 0; j < HEIGHT; j++)
		{
			printf("%c", grid[i][j]);	
		}
		printf("\n");
	}
}**/
