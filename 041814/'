#include <stdio.h>

#define WIDTH 3
#define HEIGHT 3
#define INAROW 3

void PrintGrid(char grid[HEIGHT][WIDTH]);
int is0(char);
int isX(char);
int CheckRow(int RowNumber, char grid[HEIGHT][WIDTH], char Next);
int CheckCol(int ColNumber, char grid[HEIGHT][WIDTH], char Next);
int CheckDiagLR(int ColNumber, char grid[HEIGHT][WIDTH], char Next);
int CheckDiagRL(int ColNumber, char grid[HEIGHT][WIDTH], char Next);


int main( int argc, char* argv[] )
{
	//Initialize Variables
	int i, j;

	//Take in Input
	char grid[HEIGHT][WIDTH], NextMove; 


	scanf("%c",&NextMove);
	for(i = 0; i < WIDTH; i++)
	{
		scanf("\n");
		
		for(j = 0; j < HEIGHT; j++)
		{
			scanf("%c", &grid[i][j]);	
		}
	}


	printf("====\n");
	printf("Next Move: %c\n", NextMove);
	PrintGrid(grid);	

	printf("====\n");
	printf("Row Check\n");
	for(i = 0; i < HEIGHT; i++)
	{
		printf("Row %d: %d\n", i, CheckRow(i, grid, NextMove));
	}


	printf("====\n");
	printf("Column Check\n");
	for(i = 0; i < WIDTH; i++)
	{
		printf("Column %d: %d\n", i, CheckCol(i, grid, NextMove));
	}
	printf("====\n");
	printf("Diagonal Check\n");
	for(i = 0; i < WIDTH; i++)
	{
		printf("Column %d: %d\n", i, CheckDiagLR(i, grid, NextMove));
	}
	for(i = 0; i < WIDTH; i++)
	{
		printf("Column %d: %d\n", i, CheckDiagRL(i, grid, NextMove));
	}

	return 0;
}

int is0(char val)
{
	return ((val == '0') || (val == 'O') || (val == 'o'));
}

int isX(char val)
{
	return (val == 'x' || val == 'X');
}

int CheckRow(int RowNumber, char grid[HEIGHT][WIDTH], char Next)
{
	int i, sum;

	if(RowNumber >= HEIGHT || RowNumber < 0)
	{
		return 0;
	}

	sum = 0;
	for(i = 0; i < WIDTH; i++)
	{
		if(isX(grid[RowNumber][i]))
		{
			sum++;
		}	
		else if(is0(grid[RowNumber][i]))
		{
			sum--;
		}
	}
	
	if((isX(Next)))	
	{
		return ((sum == INAROW));	
	}
	else if((is0(Next)))	
	{
		return ((sum*(-1)) == INAROW);	
	}
	else
	{
		return 0;
	}
}

int CheckCol(int ColNumber, char grid[HEIGHT][WIDTH], char Next)
{
	int i, sum;

	if(ColNumber >= WIDTH || ColNumber < 0)
	{
		return 0;
	}

	sum = 0;
	for(i = 0; i < WIDTH; i++)
	{
		if(isX(grid[i][ColNumber]))
		{
			sum++;
		}	
		else if(is0(grid[i][ColNumber]))
		{
			sum--;
		}
	}
	
	if((isX(Next)))	
	{
		return ((sum == INAROW));	
	}
	else if((is0(Next)))	
	{
		return ((sum*(-1)) == INAROW);	
	}
	else
	{
		return 0;
	}
}

int CheckDiagLR(int ColNumber, char grid[HEIGHT][WIDTH], char Next)
{
	int i, j, sum;

	if(ColNumber >= WIDTH || ColNumber < 0)
	{
		return 0;
	}

	sum = 0;
	for(i = 0; (((ColNumber + i) < HEIGHT) && (i < WIDTH)); i++)
	{
		if(isX(grid[i][ColNumber + i]))
		{
			sum++;
		}	
		else if(is0(grid[i][ColNumber + i]))
		{
			sum--;
		}
	}
	
	if((isX(Next)))	
	{
		return ((sum == INAROW));	
	}
	else if((is0(Next)))	
	{
		return ((sum*(-1)) == INAROW);	
	}
	else
	{
		return 0;
	}
}

int CheckDiagRL(int ColNumber, char grid[HEIGHT][WIDTH], char Next)
{
	int i, j, sum;

	if(ColNumber >= WIDTH || ColNumber < 0)
	{
		return 0;
	}

	sum = 0;
	for(i = 0; (((ColNumber - i) >= 0) && (i < WIDTH)); i++)
	{
		if(isX(grid[i][ColNumber - i]))
		{
			sum++;
		}	
		else if(is0(grid[i][ColNumber - i]))
		{
			sum--;
		}
	}

	if((isX(Next)))	
	{
		return ((sum == INAROW));	
	}
	else if((is0(Next)))	
	{
		return ((sum*(-1)) == INAROW);	
	}
	else
	{
		return 0;
	}
}

void PrintGrid(char grid[HEIGHT][WIDTH])
{
	//Initialize Varialbes
	int i, j;
	
	//Print out Grid
	for(i = 0; i < HEIGHT; i++)
	{
		for(j = 0; j < WIDTH; j++)
		{
			printf("%c", grid[i][j]);	
		}
		printf("\n");
	}
}
